/*
FUNCTION_NAME: FUN_0550d078
ENTRY_POINT: 0550d078
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x0550d354) */

void FUN_0550d078(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_06bbf592 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_76_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bbf592 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_78_0_TypeInfo) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0550d158;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02f421d0(param_2,*(long *)OVRPlugin_OVRP_1_78_0_TypeInfo,0);
LAB_0550d158:
  plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar5 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  puVar2 = UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo;
  puVar1 = PTR_DAT_067c91b8;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0550d1ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_0550d1ec:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0550d2fc;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0550d250;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar2,0);
LAB_0550d250:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar6 = FUN_0491c6f8(*(long *)(param_1 + 0x10),uVar9,*(undefined8 *)puVar5);
    lVar10 = *(long *)(param_1 + 0x10);
    if (iVar6 == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0491dbd4(lVar10,uVar9,*(undefined8 *)puVar4);
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0491c764(lVar10,uVar9,iVar6 + -1,*(undefined8 *)puVar3);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0550d318;
    }
  }
LAB_0550d2fc:
  puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067c91b0,0);
LAB_0550d318:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


