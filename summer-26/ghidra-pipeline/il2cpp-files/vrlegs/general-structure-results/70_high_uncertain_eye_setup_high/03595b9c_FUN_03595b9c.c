/*
FUNCTION_NAME: FUN_03595b9c
ENTRY_POINT: 03595b9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03595b9c(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  
  if ((DAT_0412e096 & 1) == 0) {
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd9af8);
    FUN_01ab69ac(PTR_DAT_03cbeb48);
    FUN_01ab69ac(PTR_DAT_03ce0510);
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412e096 = 1;
  }
  puVar15 = Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_1_TypeInfo;
  puVar14 = Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_0_TypeInfo;
  puVar13 = PTR_DAT_03ce0510;
  puVar12 = PTR_DAT_03cd9af8;
  puVar11 = PTR_DAT_03cbeb48;
  lVar17 = param_1[2];
  if (0x3ffe < param_2) {
    param_2 = 0x3fff;
  }
  if (lVar17 != 0) {
    iVar8 = *(int *)(lVar17 + 0x18);
    iVar10 = param_2 << 2;
    iVar1 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar1 = iVar8;
    }
    FUN_01f25968(param_1 + 2,iVar10,*(undefined8 *)PTR_DAT_03ce0510);
    plVar5 = param_1 + 3;
    FUN_01f25968(plVar5,iVar10,*(undefined8 *)puVar13);
    plVar6 = param_1 + 4;
    FUN_01f25968(plVar6,iVar10,*(undefined8 *)puVar15);
    FUN_01f25968(param_1 + 5,iVar10,*(undefined8 *)puVar11);
    FUN_01f25968(param_1 + 6,iVar10,*(undefined8 *)puVar11);
    FUN_01f25968(param_1 + 7,iVar10,*(undefined8 *)puVar14);
    plVar7 = param_1 + 8;
    FUN_01f25968(plVar7,param_2 * 6,*(undefined8 *)puVar12);
    puVar11 = OVRPlugin_Media_TypeInfo;
    iVar1 = iVar1 >> 2;
    if (iVar1 < param_2) {
      uVar18 = iVar1 << 2;
      lVar17 = (long)param_2 - (long)iVar1;
      uVar19 = iVar1 * 6;
      do {
        lVar16 = *(long *)puVar11;
        lVar20 = *plVar5;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar11;
        }
        if (lVar20 == 0) goto LAB_0359600c;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) {
LAB_03596008:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar22 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0xc);
        lVar20 = lVar20 + (long)(int)uVar18 * 0xc;
        *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 4);
        *(undefined4 *)(lVar20 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_0359600c;
        uVar2 = uVar18 + 1;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_03596008;
        lVar16 = lVar16 + (long)(int)uVar2 * 0xc;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_0359600c;
        uVar3 = uVar18 + 2;
        if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_03596008;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_0359600c;
        uVar4 = uVar18 + 3;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_03596008;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        lVar16 = lVar16 + (long)(int)uVar4 * 0xc;
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_0359600c;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_03596008;
        lVar16 = lVar16 + (long)(int)uVar18 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_0359600c;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_03596008;
        lVar16 = lVar16 + (long)(int)uVar2 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_0359600c;
        if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_03596008;
        lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_0359600c;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_03596008;
        lVar16 = lVar16 + (long)(int)uVar4 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar7;
        if (lVar16 == 0) goto LAB_0359600c;
        uVar9 = *(uint *)(lVar16 + 0x18);
        if (uVar9 <= uVar19) goto LAB_03596008;
        *(uint *)(lVar16 + (long)(int)uVar19 * 4 + 0x20) = uVar18;
        if (uVar9 <= uVar19 + 1) goto LAB_03596008;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 1) * 4 + 0x20) = uVar2;
        if (uVar9 <= uVar19 + 2) goto LAB_03596008;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 2) * 4 + 0x20) = uVar3;
        if (uVar9 <= uVar19 + 3) goto LAB_03596008;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 3) * 4 + 0x20) = uVar3;
        if (uVar9 <= uVar19 + 4) goto LAB_03596008;
        uVar2 = uVar19 + 5;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 4) * 4 + 0x20) = uVar4;
        if (uVar9 <= uVar2) goto LAB_03596008;
        uVar19 = uVar19 + 6;
        lVar17 = lVar17 + -1;
        *(uint *)(lVar16 + (long)(int)uVar2 * 4 + 0x20) = uVar18;
        uVar18 = uVar18 + 4;
      } while (lVar17 != 0);
      if (*param_1 != 0) {
        FUN_036a460c(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_036a46b8(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_036a4764(*param_1,param_1[4],0);
            if (*param_1 != 0) {
              FUN_036a8198(*param_1,*plVar7,0);
              return;
            }
          }
        }
      }
    }
    else if (*param_1 != 0) {
      FUN_036a8198(*param_1,param_1[8],0);
      if (*param_1 != 0) {
        FUN_036a460c(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_036a46b8(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_036a4764(*param_1,*plVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_0359600c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


