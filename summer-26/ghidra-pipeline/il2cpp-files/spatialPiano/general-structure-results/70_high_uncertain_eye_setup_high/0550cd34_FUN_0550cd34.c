/*
FUNCTION_NAME: FUN_0550cd34
ENTRY_POINT: 0550cd34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x0550d00c) */

void FUN_0550cd34(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int local_44;
  
  if ((DAT_06bbf591 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_76_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bbf591 = 1;
  }
  local_44 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_OVRP_1_78_0_TypeInfo) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0550ce0c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0(param_2,*(long *)OVRPlugin_OVRP_1_78_0_TypeInfo,0);
LAB_0550ce0c:
  plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar4 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_75_0_TypeInfo;
  puVar2 = UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo;
  puVar1 = PTR_DAT_067c91b8;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0550ce98;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar1,0);
LAB_0550ce98:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0550cfb4;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0550cefc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar2,0);
LAB_0550cefc:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar9 = FUN_0491e214(*(long *)(param_1 + 0x10),uVar7,&local_44,*(undefined8 *)puVar3);
    lVar8 = *(long *)(param_1 + 0x10);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0491c764(lVar8,uVar7,1,*(undefined8 *)puVar4);
    }
    else {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0491c764(lVar8,uVar7,local_44 + 1,*(undefined8 *)puVar4);
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0550cfd0;
    }
  }
LAB_0550cfb4:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_0550cfd0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


