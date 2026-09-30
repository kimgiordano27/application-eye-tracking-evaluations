/*
FUNCTION_NAME: FUN_088d3d80
ENTRY_POINT: 088d3d80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x088d427c) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_088d3d80(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 uVar18;
  
                    /* try { // try from 088d3d98 to 089d3df7 has its CatchHandler @ 088d3d98
                       catch() { ... } // from try @ 088d3d98 with catch @ 088d3d98
                       catch() { ... } // from try @ 088d3e24 with catch @ 088d3d98
                       catch() { ... } // from try @ 088d3e5c with catch @ 088d3d98
                       catch() { ... } // from try @ 088d3ea0 with catch @ 088d3d98 */
  if ((DAT_0a52fda3 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f24cf0);
    FUN_04447ba8(PTR_DAT_09f1e700);
    FUN_04447ba8(PTR_DAT_09f91910);
    FUN_04447ba8(PTR_DAT_09f27e50);
    FUN_04447ba8(PTR_DAT_09f49260);
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f2d040);
    FUN_04447ba8(PTR_DAT_09f2d048);
    FUN_04447ba8(PTR_DAT_09f1f018);
    FUN_04447ba8(PTR_DAT_09f91ae0);
    FUN_04447ba8(PTR_DAT_09f91ae8);
    FUN_04447ba8(PTR_DAT_09f91a80);
    FUN_04447ba8(PTR_DAT_09f91a88);
    DAT_0a52fda3 = 1;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    return 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      return 0;
    }
    bVar7 = *(char *)(param_1 + 0x30) != '\0';
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e700,1);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined2 *)(lVar8 + 0x20) = 0x2c;
      puVar3 = PTR_DAT_09f27e50;
      if (*(int *)(*(long *)PTR_DAT_09f27e50 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      plVar9 = (long *)FUN_088c8eb8(param_2,lVar8);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f2d040) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_088d3f24;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f2d040,0);
LAB_088d3f24:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar6 = PTR_DAT_09f91a88;
        puVar5 = PTR_DAT_09f91a80;
        puVar4 = PTR_DAT_09f2d048;
        puVar2 = PTR_DAT_09f1f018;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar8 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_088d3fa4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar2,0);
LAB_088d3fa4:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            uVar16 = 1;
            break;
          }
          lVar8 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto UnityEngine_InputSystem_InputActionSetupExtensions__WithOptionalDevice;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar4,0);
UnityEngine_InputSystem_InputActionSetupExtensions__WithOptionalDevice:
          lVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar8 = FUN_078b928c(lVar8,0);
          if (!bVar7) {
LAB_088d41bc:
            uVar16 = 0;
            break;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x30);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar14 = FUN_088c7c60(lVar8,uVar1);
          if ((uVar14 & 1) == 0) goto LAB_088d41bc;
          lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f91ae8);
          FUN_07a80df4(lVar11,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          puVar10 = (undefined8 *)(lVar11 + 0x18);
          *puVar10 = *(undefined8 *)puVar5;
          thunk_FUN_044bb4b4(puVar10);
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar6;
          thunk_FUN_044bb4b4();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar14 = FUN_078b9650(lVar8,*puVar10,0);
          if ((uVar14 & 1) == 0) goto LAB_088d41bc;
          uVar1 = *(undefined1 *)(param_1 + 0x30);
          lVar17 = *(long *)PTR_DAT_09f24cf0;
          lVar13 = *(long *)(lVar17 + 0x38);
          if (lVar13 == 0) {
            FUN_04482014(lVar17);
            lVar13 = *(long *)(lVar17 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_04481fb8();
          }
          lVar17 = *(long *)puVar3;
          uVar18 = **(undefined8 **)(lVar13 + 0xb8);
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_044a54b4(lVar17);
          }
          uVar18 = FUN_088c7d48(uVar1,uVar18);
          *(undefined8 *)(lVar11 + 0x10) = uVar18;
          thunk_FUN_044bb4b4();
          lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e700,1);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined2 *)(lVar13 + 0x20) = 0x3b;
          uVar18 = FUN_088c8eb8(lVar8);
          uVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f49260);
          FUN_05562504(uVar12,lVar11,*(undefined8 *)PTR_DAT_09f91ae0,0);
          uVar14 = Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
                             (uVar18,uVar12,*(undefined8 *)PTR_DAT_09f91910);
          bVar7 = false;
          uVar16 = 0;
        } while ((uVar14 & 1) == 0);
        if (plVar9 == (long *)0x0) {
          return uVar16;
        }
        lVar8 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f1f008) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_088d422c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f1f008,0);
LAB_088d422c:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
        return uVar16;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


