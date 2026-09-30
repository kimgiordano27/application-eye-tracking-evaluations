/*
FUNCTION_NAME: Unity.Networking.Transport.BaselibNetworkInterface.Payloads$$Dispose
ENTRY_POINT: 07e98014
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Networking_Transport_BaselibNetworkInterface_Payloads__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  unaff_x19[6] = unaff_x21;
  thunk_FUN_03d233cc();
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000018);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_07e98138:
    uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,0);
  }
  if (3 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[7] = lVar2;
    thunk_FUN_03d233cc(unaff_x19 + 7,lVar2);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000010);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_07e98138;
    if (4 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[8] = lVar2;
      thunk_FUN_03d233cc(unaff_x19 + 8,lVar2);
      in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar2 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000008);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_07e98138;
      puVar1 = PTR_DAT_08ef4920;
      if (5 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[9] = lVar2;
        thunk_FUN_03d233cc(unaff_x19 + 9,lVar2);
        FUN_06f752c8(*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


