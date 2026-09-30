/*
FUNCTION_NAME: PlayFab.ClientModels.ListPlayerCustomPropertiesRequest$$.ctor
ENTRY_POINT: 05284224
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 PlayFab_ClientModels_ListPlayerCustomPropertiesRequest___ctor(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 unaff_w19;
  undefined8 uVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  plVar1 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
  if (plVar1 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar2 = thunk_FUN_02d8a53c();
  if (lVar2 != 0) {
    if ((int)plVar1[3] != 0) {
      plVar1[4] = unaff_x22;
      thunk_FUN_02dc1ef0();
      lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar2;
        thunk_FUN_02dc1ef0(plVar1 + 5,lVar2);
        in_stack_00000008 = unaff_w19;
        lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if (2 < *(uint *)(plVar1 + 3)) {
          plVar1[6] = lVar2;
          thunk_FUN_02dc1ef0(plVar1 + 6,lVar2);
          if (param_1 != (long *)0x0) {
            lVar2 = *param_1;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            uVar7 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0664b728) {
                  puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_052846a0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_02d87540(param_1,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
            (*(code *)*puVar4)(param_1,3,uVar7,plVar1,puVar4[1]);
            if (unaff_x23 != 0) {
              return *(undefined8 *)(unaff_x23 + 0x40);
            }
          }
          goto LAB_052846c8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
  uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar7,0);
}


