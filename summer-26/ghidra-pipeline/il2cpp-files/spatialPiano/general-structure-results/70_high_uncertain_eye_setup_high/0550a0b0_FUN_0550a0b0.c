/*
FUNCTION_NAME: FUN_0550a0b0
ENTRY_POINT: 0550a0b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0550a3b0) */

void FUN_0550a0b0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_06bbf57e & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067ca818);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca820);
    FUN_02f08768(OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    DAT_06bbf57e = 1;
  }
  puVar5 = OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo;
  puVar4 = PTR_DAT_067ca818;
  puVar3 = PTR_DAT_067c91b8;
  puVar2 = PTR_DAT_067c91b0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_40_0_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_40_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    if (param_2[3] != 0) {
      plVar8 = (long *)FUN_040bcacc(param_2[3],*(undefined8 *)PTR_DAT_067ca820);
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0550a1fc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar3,0);
LAB_0550a1fc:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0550a2e4;
          lVar11 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0550a2bc;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0550a2a4;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0550a260;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar4,0);
LAB_0550a260:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        FUN_05500c08(param_1,uVar10);
      } while( true );
    }
  }
  goto LAB_0550a3a4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0550a2a4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0550a2d8;
    }
  }
LAB_0550a2bc:
  puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar2,0);
LAB_0550a2d8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0550a2e4:
  plVar8 = (long *)(**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (plVar8 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
    if (param_2[3] != 0) {
      iVar6 = FUN_040bc85c(param_2[3],*(undefined8 *)puVar5);
      iVar7 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (iVar7 == 0x20) {
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054f92e0(*(long *)(param_1 + 0x10),uVar10,iVar6);
          return;
        }
      }
      else {
        lVar11 = *(long *)(param_1 + 0x10);
        if (iVar6 == 1) {
          if (lVar11 != 0) {
            FUN_054f9200(lVar11,uVar10);
            return;
          }
        }
        else if (lVar11 != 0) {
          FUN_054f926c(lVar11,uVar10,iVar6);
          return;
        }
      }
    }
  }
LAB_0550a3a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


