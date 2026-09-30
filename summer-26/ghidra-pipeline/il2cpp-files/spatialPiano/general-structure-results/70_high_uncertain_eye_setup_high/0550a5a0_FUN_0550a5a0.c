/*
FUNCTION_NAME: FUN_0550a5a0
ENTRY_POINT: 0550a5a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0550a81c) */

void FUN_0550a5a0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_06bbf580 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(UnityEngine_InputForUI_InputManagerProvider_Input_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce4c8);
    FUN_02f08768(OVRPlugin_OVRP_1_43_0_TypeInfo);
    DAT_06bbf580 = 1;
  }
  puVar4 = UnityEngine_InputForUI_InputManagerProvider_ITime_TypeInfo;
  puVar3 = PTR_DAT_067ce4c8;
  puVar2 = PTR_DAT_067c91b8;
  puVar1 = PTR_DAT_067c91b0;
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)OVRPlugin_OVRP_1_43_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    if (param_2[2] != 0) {
      plVar6 = (long *)FUN_040bcacc(param_2[2],
                                    *(undefined8 *)
                                     UnityEngine_InputForUI_InputManagerProvider_Input_TypeInfo);
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0550a6d0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar2,0);
LAB_0550a6d0:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_0550a7c8;
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0550a7a0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0550a788;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0550a734;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar4,0);
LAB_0550a734:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        FUN_0550110c(param_1,uVar8);
        FUN_05501424(param_1,uVar8);
      } while( true );
    }
  }
  goto LAB_0550a810;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0550a788:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0550a7bc;
    }
  }
LAB_0550a7a0:
  puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar1,0);
LAB_0550a7bc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0550a7c8:
  if (param_2[2] != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    uVar5 = FUN_040bc85c(param_2[2],*(undefined8 *)puVar3);
    if (lVar9 != 0) {
      FUN_054f90d4(lVar9,uVar5);
      return;
    }
  }
LAB_0550a810:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


