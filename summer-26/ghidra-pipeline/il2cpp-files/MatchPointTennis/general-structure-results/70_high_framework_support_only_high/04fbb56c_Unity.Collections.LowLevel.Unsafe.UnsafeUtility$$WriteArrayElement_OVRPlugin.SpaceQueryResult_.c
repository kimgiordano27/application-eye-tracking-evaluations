/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04fbb56c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 uVar13;
  void *unaff_x26;
  void *unaff_x28;
  long lVar14;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  FUN_09539898(param_1,0);
  unaff_x23[0x21] = unaff_x23[0x6f];
  unaff_x23[0x20] = unaff_x23[0x6e];
  unaff_x23[0x23] = unaff_x23[0x71];
  unaff_x23[0x22] = unaff_x23[0x70];
  unaff_x23[0x25] = unaff_x23[0x73];
  unaff_x23[0x24] = unaff_x23[0x72];
  unaff_x23[0x27] = unaff_x23[0x75];
  unaff_x23[0x26] = unaff_x23[0x74];
  FUN_08b41434(unaff_x29 + -0xc0,unaff_x19 + 0x38,0);
  unaff_x23[0x11] = unaff_x23[0x6f];
  unaff_x23[0x10] = unaff_x23[0x6e];
  unaff_x23[0x13] = unaff_x23[0x71];
  unaff_x23[0x12] = unaff_x23[0x70];
  unaff_x23[0x15] = unaff_x23[0x73];
  unaff_x23[0x14] = unaff_x23[0x72];
  unaff_x23[0x17] = unaff_x23[0x75];
  unaff_x23[0x16] = unaff_x23[0x74];
  unaff_x23[0x19] = unaff_x23[0x79];
  unaff_x23[0x18] = unaff_x23[0x78];
  unaff_x23[0x1b] = unaff_x23[0x7b];
  unaff_x23[0x1a] = unaff_x23[0x7a];
  unaff_x23[0x1d] = unaff_x23[0x7d];
  unaff_x23[0x1c] = unaff_x23[0x7c];
  unaff_x23[0x1f] = unaff_x23[0x7f];
  unaff_x23[0x1e] = unaff_x23[0x7e];
  uVar6 = FUN_0929d434(unaff_x19 + 0x30,unaff_x19 + 0x28,0);
  if ((uVar6 & 1) != 0) {
LAB_04fbba10:
    memcpy(unaff_x28,unaff_x19 + 0x7c,0x48);
    if (*(long *)(unaff_x19[1] + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar10 = unaff_x19[4];
  lVar7 = FUN_095258d0(lVar10,0);
  if (lVar7 != 0) {
    FUN_09539898(unaff_x29 + -0x70,lVar7,0);
    unaff_x23[9] = unaff_x23[0x79];
    unaff_x23[8] = unaff_x23[0x78];
    unaff_x23[0xb] = unaff_x23[0x7b];
    unaff_x23[10] = unaff_x23[0x7a];
    unaff_x23[0xd] = unaff_x23[0x7d];
    unaff_x23[0xc] = unaff_x23[0x7c];
    unaff_x23[0xf] = unaff_x23[0x7f];
    unaff_x23[0xe] = unaff_x23[0x7e];
    FUN_08b41434(unaff_x29 + -0xc0,unaff_x19 + 0x20,0);
    uVar15 = unaff_x23[0x72];
    uVar13 = unaff_x23[0x75];
    uVar9 = unaff_x23[0x74];
    uVar19 = unaff_x23[0x6f];
    uVar18 = unaff_x23[0x6e];
    uVar17 = unaff_x23[0x71];
    uVar16 = unaff_x23[0x70];
    unaff_x23[0x7d] = unaff_x23[0x73];
    unaff_x23[0x7c] = uVar15;
    unaff_x23[0x7f] = uVar13;
    unaff_x23[0x7e] = uVar9;
    unaff_x23[0x79] = uVar19;
    unaff_x23[0x78] = uVar18;
    unaff_x23[0x7b] = uVar17;
    unaff_x23[0x7a] = uVar16;
    *(undefined8 *)(lVar10 + 0x88) = unaff_x23[0x73];
    *(undefined8 *)(lVar10 + 0x80) = uVar15;
    *(undefined8 *)(lVar10 + 0x98) = uVar13;
    *(undefined8 *)(lVar10 + 0x90) = uVar9;
    *(undefined8 *)(lVar10 + 0x68) = uVar19;
    *(undefined8 *)(lVar10 + 0x60) = uVar18;
    *(undefined8 *)(lVar10 + 0x78) = uVar17;
    *(undefined8 *)(lVar10 + 0x70) = uVar16;
    puVar5 = PTR_DAT_09f27798;
    lVar7 = *(long *)PTR_DAT_09f27798;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar5;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar7 != 0) {
      iVar12 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar12) {
        FUN_07a61000(*(undefined8 *)(lVar7 + 0x10),0,iVar12,0);
      }
      lVar7 = *(long *)(unaff_x19[4] + 0x58);
      if (lVar7 != 0) {
        *unaff_x19 = unaff_x28;
        lVar7 = FUN_0743eae0(lVar7,*(undefined8 *)PTR_DAT_09f27748);
        if (lVar7 != 0) {
          System_Collections_Generic_List<OVRTask<OVRAnchor>>__set_Capacity
                    (unaff_x29 + -0xc0,lVar7,*(undefined8 *)PTR_DAT_09f27770);
          uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
          unaff_x23[0x61] = unaff_x23[0x6f];
          unaff_x23[0x60] = unaff_x23[0x6e];
          unaff_x19[0x7a] = uVar9;
          while (uVar6 = FUN_05260070(unaff_x19 + 0x78,*(undefined8 *)PTR_DAT_09f27760),
                (uVar6 & 1) != 0) {
            if (*(long *)(unaff_x19[4] + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar7 = unaff_x19[0x7a];
            FUN_0743ed80(unaff_x29 + -0x70,*(long *)(unaff_x19[4] + 0x58),lVar7,
                         *(undefined8 *)PTR_DAT_09f27740);
            memcpy(unaff_x19 + 0x6e,(void *)(unaff_x29 + -0x70),0x48);
            plVar11 = *(long **)(unaff_x19[2] + 0x38);
            pvVar1 = (void *)unaff_x19[3];
            if (-1 < *(int *)(*plVar11 + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -200);
            }
            memcpy(unaff_x26,pvVar1,unaff_x24);
            uVar9 = thunk_FUN_04484e3c(*plVar11);
            uVar16 = *(undefined8 *)(lVar10 + 0x80);
            uVar15 = *(undefined8 *)(lVar10 + 0x98);
            uVar13 = *(undefined8 *)(lVar10 + 0x90);
            uVar20 = *(undefined8 *)(lVar10 + 0x68);
            uVar19 = *(undefined8 *)(lVar10 + 0x60);
            uVar18 = *(undefined8 *)(lVar10 + 0x78);
            uVar17 = *(undefined8 *)(lVar10 + 0x70);
            unaff_x23[5] = *(undefined8 *)(lVar10 + 0x88);
            unaff_x23[4] = uVar16;
            unaff_x23[7] = uVar15;
            unaff_x23[6] = uVar13;
            unaff_x23[1] = uVar20;
            *unaff_x23 = uVar19;
            unaff_x23[3] = uVar18;
            unaff_x23[2] = uVar17;
            FUN_0929d6e4(unaff_x19 + 100,uVar9,unaff_x19 + 0x18,1,4,0);
            plVar11 = *(long **)(unaff_x19[2] + 0x38);
            pvVar1 = (void *)unaff_x19[3];
            if (-1 < *(int *)(*plVar11 + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -200);
            }
            memcpy(unaff_x25,pvVar1,unaff_x24);
            lVar8 = thunk_FUN_04484e3c(*plVar11);
            if (lVar7 == lVar8) {
              memcpy(unaff_x19 + 0x7c,unaff_x19 + 100,0x48);
            }
            FUN_0929e6c4(unaff_x19 + 0x6e,0);
            lVar8 = *(long *)puVar5;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar8 = *(long *)puVar5;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
            unaff_x23[0x49] = 0;
            unaff_x23[0x48] = 0;
            unaff_x23[0x4b] = 0;
            unaff_x23[0x4a] = 0;
            unaff_x23[0x45] = 0;
            unaff_x23[0x44] = 0;
            unaff_x23[0x47] = 0;
            unaff_x23[0x46] = 0;
            unaff_x23[0x43] = 0;
            unaff_x23[0x42] = 0;
            unaff_x19[0x5a] = lVar7;
            thunk_FUN_044bb4b4(unaff_x19 + 0x5a,lVar7);
            memcpy((void *)((ulong)(unaff_x19 + 0x5a) | 8),unaff_x19 + 100,0x48);
            memcpy(unaff_x19 + 0xe,unaff_x19 + 0x5a,0x50);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar14 = *(long *)PTR_DAT_09f27778;
            memcpy((void *)(unaff_x29 + -0xc0),unaff_x19 + 0xe,0x50);
            lVar7 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              pvVar1 = (void *)(lVar7 + (long)(int)uVar2 * 0x50 + 0x20);
              memcpy(pvVar1,(void *)(unaff_x29 + -0xc0),0x50);
              thunk_FUN_044bb4b4(pvVar1,0);
            }
            else {
              uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
              memcpy((void *)(unaff_x29 + -0x70),(void *)(unaff_x29 + -0xc0),0x50);
              FUN_05e4e628(lVar8,unaff_x29 + -0x70,uVar9);
            }
          }
          FUN_0526006c(unaff_x19 + 0x78,*(undefined8 *)PTR_DAT_09f27758);
          puVar4 = PTR_DAT_09f27790;
          puVar3 = PTR_DAT_09f27750;
          unaff_x28 = (void *)*unaff_x19;
          iVar12 = 0;
          while( true ) {
            lVar7 = *(long *)puVar5;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar7 = *(long *)puVar5;
            }
            lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
            if (lVar10 == 0) break;
            if (*(int *)(lVar10 + 0x18) <= iVar12) goto LAB_04fbba10;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              if (lVar10 == 0) break;
            }
            FUN_05e4e244(unaff_x19 + 0xe,lVar10,iVar12,*(undefined8 *)puVar4);
            uVar9 = unaff_x19[0xe];
            memcpy(unaff_x19 + 0x50,unaff_x19 + 0xf,0x48);
            lVar7 = *(long *)(unaff_x19[4] + 0x58);
            memcpy(unaff_x19 + 5,unaff_x19 + 0x50,0x48);
            if (lVar7 == 0) break;
            uVar13 = *(undefined8 *)puVar3;
            memcpy(unaff_x19 + 0xe,unaff_x19 + 5,0x48);
            FUN_0743ee0c(lVar7,uVar9,unaff_x19 + 0xe,uVar13);
            iVar12 = iVar12 + 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


