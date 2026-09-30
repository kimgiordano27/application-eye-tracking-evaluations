/*
FUNCTION_NAME: FUN_055077fc
ENTRY_POINT: 055077fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05507bd8) */

undefined8 FUN_055077fc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_06bbf570 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_06bbf570 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_05507bcc;
  iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  if (iVar3 < 0xb) {
    if (iVar3 != 8) {
      if (iVar3 == 10) {
        uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        lVar8 = *(long *)(PTR_DAT_067c9338 + 0x20);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
        }
        uVar6 = FUN_050e4454(lVar8 + 0x20,0);
        uVar9 = FUN_050edfb8(uVar7,uVar6,0);
        if ((uVar9 & 1) == 0) goto LAB_05507ae4;
      }
LAB_05507a58:
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_05507bcc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) == 8) {
        return 0;
      }
      uVar7 = 8;
      goto LAB_05507aec;
    }
  }
  else if (iVar3 < 0x38) {
    if (iVar3 == 0x2f) {
      FUN_05506338(param_1,1);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar8 != 0)) {
        if (*(int *)(lVar8 + 0x18) == 2) {
          return 1;
        }
        goto LAB_05507bb8;
      }
      goto LAB_05507bcc;
    }
    if (iVar3 != 0x35) goto LAB_05507a58;
  }
  else if (iVar3 == 0x38) {
    lVar8 = *(long *)(param_1 + 0x30);
    if (lVar8 == 0) goto LAB_05507bcc;
    if (*(int *)(lVar8 + 0x18) == 1) {
      if (*param_2 != *(long *)OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo) {
LAB_05507bd0:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_2);
      }
      lVar11 = param_2[2];
      uVar9 = FUN_054fdca4(lVar8,lVar11);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar8 == 0)) goto LAB_05507bcc;
      if ((*(int *)(lVar8 + 0x18) == 2) && (uVar9 = FUN_054fdca4(lVar8,lVar11), (uVar9 & 1) != 0)) {
        return 0;
      }
    }
  }
  else if (iVar3 != 0x3a) {
    if (iVar3 == 0x3b) {
      FUN_05506338(param_1,2);
      if (*param_2 != *(long *)OVRPlugin_OVRP_1_119_0_TypeInfo) goto LAB_05507bd0;
      if (param_2[3] != 0) {
        plVar4 = (long *)FUN_040bcacc(param_2[3],*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
        puVar2 = OVRPlugin_OVRP_1_115_0_TypeInfo;
        puVar1 = PTR_DAT_067c91b8;
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0550795c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,0);
LAB_0550795c:
          uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_05507bac;
            lVar8 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_05507b84;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_05507b6c;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_055079c0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,0);
LAB_055079c0:
          lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_05507c34(param_1,*(undefined8 *)(lVar8 + 0x18));
        } while( true );
      }
      goto LAB_05507bcc;
    }
    goto LAB_05507a58;
  }
LAB_05507ae4:
  uVar7 = 0;
LAB_05507aec:
  FUN_05506338(param_1,uVar7);
  return 1;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_05507b6c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05507ba0;
    }
  }
LAB_05507b84:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067c91b0,0);
LAB_05507ba0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_05507bac:
  param_2 = (long *)param_2[4];
LAB_05507bb8:
  FUN_05507c34(param_1,param_2);
  return 1;
}


