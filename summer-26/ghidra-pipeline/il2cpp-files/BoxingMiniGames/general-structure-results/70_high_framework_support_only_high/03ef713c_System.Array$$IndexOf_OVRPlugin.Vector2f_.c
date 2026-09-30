/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector2f>
ENTRY_POINT: 03ef713c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ef7570) */

long System_Array__IndexOf<OVRPlugin_Vector2f>(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7054 with catch @ 03ef713c
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef70bc with catch @ 03ef7140
                        */
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef6fc4 with catch @ 03ef7154
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7098 with catch @ 03ef7158
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef700c with catch @ 03ef715c
                        */
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_03ef7160;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7070 with catch @ 03ef7144
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7130 with catch @ 03ef7148
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7038 with catch @ 03ef714c
                        */
  puVar2 = (undefined8 *)FUN_0367cd30();
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef712c with catch @ 03ef7150
                        */
LAB_03ef7160:
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03ef70dc with catch @ 03ef7160
                       catch(type#1 @ 07542bc8) { ... } // from try @ 03ef7134 with catch @ 03ef7160
                        */
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_079f49a8;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* try { // try from 03ef717c to 03ff717f has its CatchHandler @ 03ef7188 */
  lVar5 = *plVar3;
                    /* catch() { ... } // from try @ 03ef717c with catch @ 03ef7188 */
                    /* try { // try from 03ef718c to 03ff7193 has its CatchHandler @ 03ef719c */
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 03ef7194 to 03ff719f has its CatchHandler @ 03ef6e48 */
  if (uVar8 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ef718c with catch @ 03ef719c
                        */
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 03ef71a0 to 03ff7357 has its CatchHandler @ 03ef71a0
                       catch() { ... } // from try @ 03ef71a0 with catch @ 03ef71a0
                       catch() { ... } // from try @ 03ef7494 with catch @ 03ef71a0
                       catch() { ... } // from try @ 03ef74e8 with catch @ 03ef71a0
                       catch() { ... } // from try @ 03ef7590 with catch @ 03ef71a0
                       catch() { ... } // from try @ 03ef75fc with catch @ 03ef71a0 */
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f49a8) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03ef71d4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f49a8,0);
LAB_03ef71d4:
  uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  if ((uVar8 & 1) != 0) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03ef7254;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar5,0);
LAB_03ef7254:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    lVar5 = FUN_05e72aa4();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *plVar3;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03ef72f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar6,0);
LAB_03ef72f0:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) != 0) {
      lVar6 = FUN_05ca6890(0x10,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_05ca401c(lVar6,lVar5,0);
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0367c9fc(lVar5);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03ef7398;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar5,0);
LAB_03ef7398:
        (*(code *)*puVar2)(plVar3,puVar2[1]);
        FUN_05ca3ecc(lVar6);
        if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        uVar4 = FUN_05e72aa4();
        FUN_05ca401c(lVar6,uVar4,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar7 = *plVar3;
        lVar5 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03ef7450;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar5,0);
LAB_03ef7450:
        uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      } while ((uVar8 & 1) != 0);
      lVar5 = FUN_05ca69ec(lVar6,0);
      goto LAB_03ef7498;
    }
    if (lVar5 != 0) goto LAB_03ef7498;
  }
  lVar5 = **(long **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
LAB_03ef7498:
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03ef74f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f4598,0);
LAB_03ef74f8:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return lVar5;
}


