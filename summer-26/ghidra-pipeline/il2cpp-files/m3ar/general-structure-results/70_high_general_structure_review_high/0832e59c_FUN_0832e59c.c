/*
FUNCTION_NAME: FUN_0832e59c
ENTRY_POINT: 0832e59c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


ulong FUN_0832e59c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
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
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  
  local_ac = param_1;
  uStack_a8 = param_2;
  local_a4 = param_3;
  if ((DAT_09551c9a & 1) == 0) {
    FUN_0403162c(PTR_DAT_08ff6ad0);
    DAT_09551c9a = 1;
  }
  puVar4 = PTR_DAT_08ff6ad0;
  if (param_4 != 0) {
    lVar8 = Unity_VisualScripting_AssemblyQualifiedNameParser_ParsedAssemblyQualifiedName__Replace
                      (param_4,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)puVar4);
    }
    FUN_0832d004(param_1,param_2,lVar8,param_5,&local_ac);
    lVar9 = FUN_082fb63c(param_4,0);
    uVar7 = local_a4;
    uVar6 = uStack_a8;
    uVar5 = local_ac;
    if (lVar9 != 0) {
      uVar15 = 0;
      local_ec = 0;
      local_d4 = INFINITY;
      do {
        if ((long)*(int *)(lVar9 + 0x24) <= (long)uVar15) {
          return (ulong)local_ec;
        }
        lVar9 = FUN_082fb63c(param_4,0);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_0832ecb8:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar9 = lVar9 + uVar15 * 0x18;
        uVar16 = (ulong)*(uint *)(lVar9 + 0x28);
        uVar1 = *(uint *)(lVar9 + 0x30);
        uVar14 = (ulong)uVar1;
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        if (0 < (int)uVar1) {
          lVar9 = uVar16 << 0x20;
          bVar3 = false;
          uVar13 = (ulong)(uVar1 - 1);
          puVar12 = *(undefined4 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
          local_bc = puVar12[1];
          local_d0 = puVar12[2];
          local_b8 = *puVar12;
          local_c0 = local_d0;
          local_b4 = local_b8;
          local_b0 = local_bc;
          do {
            lVar10 = FUN_082fb63c(param_4,0);
            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0))
            goto LAB_0832ec78;
            if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0832ecb8;
            lVar10 = lVar10 + (long)(int)((ulong)lVar9 >> 0x20) * 0x178;
            iVar2 = *(int *)(lVar10 + 0x5c);
            uVar22 = *(undefined4 *)(lVar10 + 0x120);
            uVar21 = *(undefined4 *)(lVar10 + 0x140);
            local_e0 = *(undefined4 *)(lVar10 + 0x148);
            if (bVar3 || (*(byte *)(lVar10 + 400) & 1) == 0) {
              if (bVar3) {
                if (uVar13 != 0) goto LAB_0832e938;
                if (lVar8 == 0) goto LAB_0832ec78;
LAB_0832e984:
                local_dc = 0;
                uStack_d8 = FUN_08596980(uVar22,lVar8,0);
                local_e4 = 0;
                uVar22 = FUN_08596980(uVar22,lVar8,0);
                if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar11 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Scale_BurstManaged
                                   (uVar5,uVar6,uVar7,local_b4,local_b0,local_d0);
                if ((uVar11 & 1) != 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate__EndInvoke
                ;
                if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                local_e8 = (float)FUN_0832dc70(local_b4,local_b0,local_d0,local_b8,local_bc,local_c0
                                              );
LAB_0832eb9c:
                fVar17 = (float)FUN_0832dc70(local_b8,local_bc,local_c0,uVar22,uVar21,local_e4);
                fVar18 = (float)FUN_0832dc70(uVar22,uVar21,local_e4,uStack_d8,local_e0,local_dc);
LAB_0832ebfc:
                fVar19 = (float)FUN_0832dc70(uStack_d8,local_e0,local_dc,local_b4,local_b0,local_d0)
                ;
                if (fVar17 <= local_e8) {
                  local_e8 = fVar17;
                }
                if (fVar18 <= local_e8) {
                  local_e8 = fVar18;
                }
                if (fVar19 <= local_e8) {
                  local_e8 = fVar19;
                }
                if (local_e8 < local_d4) {
                  bVar3 = false;
                  local_ec = (uint)uVar15;
                  local_d4 = local_e8;
                  goto LAB_0832ec4c;
                }
              }
              bVar3 = false;
            }
            else {
              if (lVar8 == 0) goto LAB_0832ec78;
              uVar20 = *(undefined4 *)(lVar10 + 0x114);
              local_d0 = 0;
              local_b0 = local_e0;
              local_b4 = FUN_08596980(uVar20,lVar8,0);
              local_c0 = 0;
              local_bc = uVar21;
              local_b8 = FUN_08596980(uVar20,lVar8,0);
              if (uVar1 == 1) {
                local_dc = 0;
                uStack_d8 = FUN_08596980(uVar22,lVar8,0);
                uVar20 = 0;
                uVar22 = FUN_08596980(uVar22,lVar8,0);
                if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                uVar11 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Scale_BurstManaged
                                   (uVar5,uVar6,uVar7,local_b4,local_b0,local_d0);
                if ((uVar11 & 1) != 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate__EndInvoke
                ;
                if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                local_e8 = (float)FUN_0832dc70(local_b4,local_b0,local_d0,local_b8,local_bc,local_c0
                                              );
                fVar17 = (float)FUN_0832dc70(local_b8,local_bc,local_c0,uVar22,uVar21,uVar20);
                fVar18 = (float)FUN_0832dc70(uVar22,uVar21,uVar20,uStack_d8,local_e0,local_dc);
                goto LAB_0832ebfc;
              }
              if (uVar13 == 0) goto LAB_0832e984;
LAB_0832e938:
              lVar10 = FUN_082fb63c(param_4,0);
              if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0))
              goto LAB_0832ec78;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar16 + 1) goto LAB_0832ecb8;
              if (iVar2 != *(int *)(lVar10 + (long)(int)((ulong)(lVar9 + 0x100000000) >> 0x20) *
                                             0x178 + 0x5c)) {
                if (lVar8 != 0) {
                  local_dc = 0;
                  uStack_d8 = FUN_08596980(uVar22,lVar8,0);
                  local_e4 = 0;
                  uVar22 = FUN_08596980(uVar22,lVar8,0);
                  if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  uVar11 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Scale_BurstManaged
                                     (uVar5,uVar6,uVar7,local_b4,local_b0,local_d0);
                  if ((uVar11 & 1) != 0) {

                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate__EndInvoke
                    :
                    return uVar15 & 0xffffffff;
                  }
                  if (*(int *)(*(long *)PTR_DAT_08ff6ad0 + 0xe4) == 0) {
                    thunk_FUN_0408f364();
                  }
                  local_e8 = (float)FUN_0832dc70(local_b4,local_b0,local_d0,local_b8,local_bc,
                                                 local_c0);
                  goto LAB_0832eb9c;
                }
                goto LAB_0832ec78;
              }
              bVar3 = true;
            }
LAB_0832ec4c:
            uVar14 = uVar14 - 1;
            uVar13 = uVar13 - 1;
            lVar9 = lVar9 + 0x100000000;
            uVar16 = uVar16 + 1;
          } while (uVar14 != 0);
        }
        uVar15 = uVar15 + 1;
        lVar9 = FUN_082fb63c(param_4,0);
      } while (lVar9 != 0);
    }
  }
LAB_0832ec78:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


