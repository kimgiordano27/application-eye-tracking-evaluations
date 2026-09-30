/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 03697a98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar6;
  uint unaff_w22;
  long *plVar7;
  long *unaff_x23;
  long lVar8;
  undefined4 uVar9;
  
  if (unaff_w22 != in_w8) {
    uVar1 = FUN_01f08890(*(undefined8 *)Method_System_Nullable<char>_GetValueOrDefault__,unaff_w22);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
    thunk_FUN_01f51358();
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03697bb0;
    FUN_0404ad48(*(long *)(unaff_x19 + 0x28),unaff_w22,0);
  }
  if (0 < (int)unaff_w22) {
    uVar6 = 0;
    do {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x138), plVar7 == (long *)0x0))
      goto LAB_03697bb0;
      lVar3 = *plVar7;
      lVar8 = *(long *)(unaff_x19 + 0x30);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_03697b50;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x23,1);
LAB_03697b50:
      uVar9 = (*(code *)*puVar2)(plVar7,uVar6 & 0xffffffff,puVar2[1]);
      if (lVar8 == 0) goto LAB_03697bb0;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = lVar8 + uVar6 * 0xc;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar8 + 0x20) = uVar9;
      *(undefined4 *)(lVar8 + 0x24) = param_2;
      *(undefined4 *)(lVar8 + 0x28) = param_3;
    } while (uVar6 != unaff_w22);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0404aff4(*(long *)(unaff_x19 + 0x28),*unaff_x20,0);
    return;
  }
LAB_03697bb0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


