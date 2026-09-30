/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$GetAssetPostfix
ENTRY_POINT: 072f0f1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__GetAssetPostfix(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x2c);
  lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x48));
  if (unaff_x20 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_072f10a8:
      uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,0);
    }
    if ((int)unaff_x20[3] == 0) {
LAB_072f10a4:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x20[4] = lVar1;
    thunk_FUN_040ec700(unaff_x20 + 4,lVar1);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      in_stack_00000008 = *(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x24);
      lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x48),&stack0x00000008);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_072f10a8;
      if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) == 0) goto LAB_072f10a4;
      unaff_x20[5] = lVar1;
      thunk_FUN_040ec700(unaff_x20 + 5,lVar1);
      if (unaff_x19 != (long *)0x0) {
        lVar1 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b9200) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 0x11) * 0x10 + 0x138);
              goto LAB_072f0ec4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00();
LAB_072f0ec4:
        (*(code *)*puVar3)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


