/*
FUNCTION_NAME: FUN_034e1aa0
ENTRY_POINT: 034e1aa0
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


void FUN_034e1aa0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02f08768(PTR_DAT_067cace8);
    FUN_02f08768(PTR_DAT_067cacf0);
    FUN_02f08768(PTR_DAT_067cacf8);
    FUN_02f08768(PTR_DAT_067cad00);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_02f41ef8(param_4);
    }
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar3 = thunk_FUN_02f45270();
    uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067cad08);
    FUN_0504ee1c(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,param_4);
  }
  lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  plVar1 = (long *)thunk_FUN_02f45174(param_1,lVar5);
  if ((plVar1 == (long *)0x0) ||
     (lVar5 = thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067cacf0), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    plVar1 = (long *)thunk_FUN_02f45174(param_1,lVar5);
    if ((plVar1 == (long *)0x0) ||
       (lVar5 = thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067cacf8), lVar5 == 0)) {
      lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c(lVar5);
      }
      plVar1 = (long *)thunk_FUN_02f45174(param_1,lVar5);
      if ((plVar1 == (long *)0x0) ||
         (lVar5 = thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067cad00), lVar5 == 0)) {
        lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c(lVar5);
        }
        plVar1 = (long *)thunk_FUN_02f45174(param_1,lVar5);
        if ((plVar1 == (long *)0x0) ||
           (lVar5 = thunk_FUN_02f45174(param_2,*(undefined8 *)PTR_DAT_067cace8), lVar5 == 0)) {
          lVar5 = **(long **)(param_4 + 0x38);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c(lVar5);
          }
          lVar6 = *param_1;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto 
                Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>
                ;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_02f421d0(param_1,lVar5,2);

          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>
          :
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          uVar3 = puVar2[1];
          goto LAB_034e1da0;
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) goto LAB_034e1d88;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
      else {
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) goto LAB_034e1d88;
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) goto LAB_034e1d88;
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) goto LAB_034e1d88;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02f421d0(plVar1,lVar6,0);
  param_1 = plVar1;
  param_2 = lVar5;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceQueryResult>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  uVar3 = puVar2[1];
LAB_034e1da0:
                    /* WARNING: Could not recover jumptable at 0x034e1db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,uVar3);
  return;
LAB_034e1d88:
  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  param_1 = plVar1;
  param_2 = lVar5;
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceQueryResult>;
}


