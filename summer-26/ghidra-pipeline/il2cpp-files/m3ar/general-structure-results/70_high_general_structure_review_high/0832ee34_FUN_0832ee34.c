/*
FUNCTION_NAME: FUN_0832ee34
ENTRY_POINT: 0832ee34
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


ulong FUN_0832ee34(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  
  local_ac = param_1;
  uStack_a8 = param_2;
  local_a4 = param_3;
  if ((DAT_09551c9c & 1) == 0) {
    FUN_0403162c(PTR_DAT_08ff6ad0);
    DAT_09551c9c = 1;
  }
  puVar4 = PTR_DAT_08ff6ad0;
  if (param_4 != 0) {
    lVar8 = FUN_082fb6e4(param_4,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)puVar4);
    }
    FUN_0832d004(param_1,param_2,lVar8,param_5,&local_ac);
    lVar9 = FUN_082fb63c(param_4,0);
    uVar7 = local_a4;
    uVar6 = uStack_a8;
    uVar5 = local_ac;
    if (lVar9 != 0) {
      uVar13 = 0;
      do {
        if ((long)*(int *)(lVar9 + 0x28) <= (long)uVar13) {
          return 0xffffffff;
        }
        lVar9 = FUN_082fb63c(param_4,0);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {

          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000355_PostfixBurstDelegate__EndInvoke
          :
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar9 = lVar9 + uVar13 * 0x28;
        uVar16 = (ulong)*(uint *)(lVar9 + 0x34);
        uVar1 = *(uint *)(lVar9 + 0x38);
        uVar15 = (ulong)uVar1;
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        if (0 < (int)uVar1) {
          lVar9 = uVar16 << 0x20;
          bVar3 = false;
          uVar14 = (ulong)(uVar1 - 1);
          puVar12 = *(undefined4 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
          local_b4 = puVar12[1];
          local_b8 = puVar12[2];
          uStack_b0 = *puVar12;
          do {
            lVar10 = FUN_082fb63c(param_4,0);
            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0))
            goto LAB_0832f178;
            if (*(uint *)(lVar10 + 0x18) <= uVar16)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000355_PostfixBurstDelegate__EndInvoke
            ;
            lVar10 = lVar10 + (long)(int)((ulong)lVar9 >> 0x20) * 0x178;
            iVar2 = *(int *)(lVar10 + 0x5c);
            uVar19 = *(undefined4 *)(lVar10 + 0x114);
            uVar18 = *(undefined4 *)(lVar10 + 0x120);
            uVar17 = *(undefined4 *)(lVar10 + 0x148);
            if ((*(int *)(param_4 + 0x310) != 5) ||
               (*(int *)(lVar10 + 0x60) + 1 == *(int *)(param_4 + 0x370))) {
              if (bVar3) {
                if (uVar14 != 0) {
LAB_0832f06c:
                  lVar10 = FUN_082fb63c(param_4,0);
                  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0))
                  goto LAB_0832f178;
                  if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar16 + 1)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000355_PostfixBurstDelegate__EndInvoke
                  ;
                  if (iVar2 == *(int *)(lVar10 + (long)(int)((ulong)(lVar9 + 0x100000000) >> 0x20) *
                                                 0x178 + 0x5c)) {
                    bVar3 = true;
                    goto LAB_0832f14c;
                  }
                }
                if (lVar8 == 0) goto LAB_0832f178;
              }
              else {
                if (lVar8 == 0) goto LAB_0832f178;
                local_b8 = 0;
                uStack_b0 = FUN_08596980(uVar19,lVar8,0);
                FUN_08596980(uVar19,lVar8,0);
                local_b4 = uVar17;
                if ((uVar1 != 1) && (uVar14 != 0)) goto LAB_0832f06c;
              }
              FUN_08596980(uVar18,lVar8,0);
              FUN_08596980(uVar18,lVar8,0);
              if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar11 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Scale_BurstManaged
                                 (uVar5,uVar6,uVar7,uStack_b0,local_b4,local_b8);
              if ((uVar11 & 1) != 0) {
                return uVar13;
              }
              bVar3 = false;
            }
LAB_0832f14c:
            uVar15 = uVar15 - 1;
            uVar14 = uVar14 - 1;
            lVar9 = lVar9 + 0x100000000;
            uVar16 = uVar16 + 1;
          } while (uVar15 != 0);
        }
        uVar13 = uVar13 + 1;
        lVar9 = FUN_082fb63c(param_4,0);
      } while (lVar9 != 0);
    }
  }
LAB_0832f178:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


