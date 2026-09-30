/*
FUNCTION_NAME: FUN_03596010
ENTRY_POINT: 03596010
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


void FUN_03596010(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  
  uVar20 = param_3;
  if ((DAT_0412e097 & 1) == 0) {
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd9af8);
    FUN_01ab69ac(PTR_DAT_03cbeb48);
    FUN_01ab69ac(PTR_DAT_03ce0510);
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    uVar20 = param_3 & 0xffffffff;
    DAT_0412e097 = 1;
  }
  puVar17 = Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_1_TypeInfo;
  puVar16 = PTR_DAT_03ce0510;
  puVar15 = PTR_DAT_03cbeb48;
  bVar18 = (uVar20 & 1) == 0;
  uVar21 = 8;
  if (bVar18) {
    uVar21 = 4;
  }
  lVar22 = param_1[2];
  uVar26 = 0;
  if (uVar21 != 0) {
    uVar26 = 0xfffc / uVar21;
  }
  iVar23 = 0x24;
  if (bVar18) {
    iVar23 = 6;
  }
  if ((int)uVar26 <= (int)param_2) {
    param_2 = uVar26;
  }
  if (lVar22 != 0) {
    iVar10 = param_2 * uVar21;
    iVar11 = 0;
    if (uVar21 != 0) {
      iVar11 = *(int *)(lVar22 + 0x18) / (int)uVar21;
    }
    FUN_01f25968(param_1 + 2,iVar10,*(undefined8 *)PTR_DAT_03ce0510);
    plVar7 = param_1 + 3;
    FUN_01f25968(plVar7,iVar10,*(undefined8 *)puVar16);
    plVar8 = param_1 + 4;
    FUN_01f25968(plVar8,iVar10,*(undefined8 *)puVar17);
    FUN_01f25968(param_1 + 5,iVar10,*(undefined8 *)puVar15);
    FUN_01f25968(param_1 + 6,iVar10,*(undefined8 *)puVar15);
    FUN_01f25968(param_1 + 7,iVar10,
                 *(undefined8 *)
                  Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_0_TypeInfo);
    plVar9 = param_1 + 8;
    FUN_01f25968(plVar9,param_2 * iVar23,*(undefined8 *)PTR_DAT_03cd9af8);
    puVar15 = OVRPlugin_Media_TypeInfo;
    if (iVar11 < (int)param_2) {
      lVar22 = (long)iVar11;
      uVar26 = iVar23 * iVar11 + 0x11;
      uVar24 = uVar21 * iVar11 + 3;
      do {
        lVar19 = *(long *)puVar15;
        lVar25 = *plVar7;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *(long *)puVar15;
        }
        if (lVar25 == 0) goto LAB_035968e4;
        uVar12 = uVar24 - 3;
        if (*(uint *)(lVar25 + 0x18) <= uVar12) {
LAB_035968e0:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar28 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0xc);
        lVar25 = lVar25 + (long)(int)uVar12 * 0xc;
        *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 4);
        *(undefined4 *)(lVar25 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_035968e4;
        uVar13 = uVar24 - 2;
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_035968e0;
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
        lVar19 = lVar19 + (long)(int)uVar13 * 0xc;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_035968e4;
        uVar14 = uVar24 - 1;
        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035968e0;
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
        lVar19 = lVar19 + (long)(int)uVar14 * 0xc;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_035968e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_035968e0;
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
        lVar19 = lVar19 + (long)(int)uVar24 * 0xc;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_035968e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_035968e0;
        lVar19 = lVar19 + (long)(int)uVar12 * 0x10;
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_035968e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_035968e0;
        lVar19 = lVar19 + (long)(int)uVar13 * 0x10;
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_035968e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_035968e0;
        lVar19 = lVar19 + (long)(int)uVar14 * 0x10;
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_035968e4;
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_035968e0;
        lVar19 = lVar19 + (long)(int)uVar24 * 0x10;
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        if ((param_3 & 1) != 0) {
          lVar19 = *(long *)puVar15;
          lVar25 = *plVar7;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar15;
          }
          if (lVar25 == 0) goto LAB_035968e4;
          uVar1 = uVar24 + 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_035968e0;
          uVar28 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0xc);
          lVar25 = lVar25 + (long)(int)uVar1 * 0xc;
          *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 4);
          *(undefined4 *)(lVar25 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_035968e4;
          uVar2 = uVar24 + 2;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar2 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_035968e4;
          uVar3 = uVar24 + 3;
          if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar3 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_035968e4;
          uVar4 = uVar24 + 4;
          if (*(uint *)(lVar19 + 0x18) <= uVar4) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar4 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_035968e4;
          if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar1 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_035968e4;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar2 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_035968e4;
          if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar3 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_035968e4;
          if (*(uint *)(lVar19 + 0x18) <= uVar4) goto LAB_035968e0;
          lVar19 = lVar19 + (long)(int)uVar4 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
        }
        lVar19 = *plVar9;
        if (lVar19 == 0) goto LAB_035968e4;
        uVar1 = *(uint *)(lVar19 + 0x18);
        if (uVar1 <= uVar26 - 0x11) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0x11) * 4 + 0x20) = uVar12;
        if (uVar1 <= uVar26 - 0x10) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0x10) * 4 + 0x20) = uVar13;
        if (uVar1 <= uVar26 - 0xf) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xf) * 4 + 0x20) = uVar14;
        if (uVar1 <= uVar26 - 0xe) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xe) * 4 + 0x20) = uVar14;
        if (uVar1 <= uVar26 - 0xd) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xd) * 4 + 0x20) = uVar24;
        if (uVar1 <= uVar26 - 0xc) goto LAB_035968e0;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xc) * 4 + 0x20) = uVar12;
        if ((param_3 & 1) != 0) {
          if (uVar1 <= uVar26 - 0xb) goto LAB_035968e0;
          iVar10 = uVar24 + 1;
          *(int *)(lVar19 + (long)(int)(uVar26 - 0xb) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 - 10) goto LAB_035968e0;
          iVar11 = uVar24 + 2;
          *(int *)(lVar19 + (long)(int)(uVar26 - 10) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 - 9) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 9) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 - 8) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 8) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 - 7) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 7) * 4 + 0x20) = uVar12;
          if (uVar1 <= uVar26 - 6) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 - 6) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 - 5) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 5) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 - 4) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 4) * 4 + 0x20) = uVar14;
          if (uVar1 <= uVar26 - 3) goto LAB_035968e0;
          iVar5 = uVar24 + 3;
          *(int *)(lVar19 + (long)(int)(uVar26 - 3) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 - 2) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 - 2) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 - 1) goto LAB_035968e0;
          iVar6 = uVar24 + 4;
          *(int *)(lVar19 + (long)(int)(uVar26 - 1) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)uVar26 * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 1) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 1) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 + 2) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 2) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 3) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 3) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 4) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 4) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 5) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 5) * 4 + 0x20) = uVar14;
          if (uVar1 <= uVar26 + 6) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 6) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 + 7) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 7) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 8) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 8) * 4 + 0x20) = uVar12;
          if (uVar1 <= uVar26 + 9) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 9) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 10) goto LAB_035968e0;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 10) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 0xb) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xb) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26 + 0xc) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xc) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 0xd) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xd) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26 + 0xe) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xe) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 0xf) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xf) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 0x10) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x10) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 0x11) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x11) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 0x12) goto LAB_035968e0;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x12) * 4 + 0x20) = iVar6;
        }
        lVar22 = lVar22 + 1;
        uVar26 = uVar26 + iVar23;
        uVar24 = uVar24 + uVar21;
      } while (lVar22 != (int)param_2);
      if (*param_1 != 0) {
        FUN_036a460c(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_036a46b8(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_036a4764(*param_1,param_1[4],0);
            if (*param_1 != 0) {
              FUN_036a8198(*param_1,*plVar9,0);
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
            FUN_036a4764(*param_1,*plVar8,0);
            return;
          }
        }
      }
    }
  }
LAB_035968e4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


