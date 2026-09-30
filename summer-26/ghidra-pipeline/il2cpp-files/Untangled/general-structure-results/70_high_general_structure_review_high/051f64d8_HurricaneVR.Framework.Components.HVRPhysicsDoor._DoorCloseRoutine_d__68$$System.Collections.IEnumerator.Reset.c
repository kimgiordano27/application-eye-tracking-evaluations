/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDoor.<DoorCloseRoutine>d__68$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 051f64d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  thunk_FUN_02f411dc();
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  uVar3 = FUN_02f07f14(lVar2,unaff_w22);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x18));
  lVar2 = *(long *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_056109c0(uVar3,0);
  if (lVar2 != 0) {
    lVar2 = FUN_054ff45c(lVar2,*(undefined8 *)PTR_DAT_06d39108,uVar3,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768(lVar7);
    }
    if (lVar2 == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d39128);
      uVar3 = thunk_FUN_02ef1808();
      uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d39130);
      FUN_054f60d0(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar3);
    }
    lVar4 = thunk_FUN_02ef170c(lVar2,lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar2,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        FUN_051f852c();
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_05501738(*unaff_x21,*(undefined8 *)PTR_DAT_06d39118,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_02f411dc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


