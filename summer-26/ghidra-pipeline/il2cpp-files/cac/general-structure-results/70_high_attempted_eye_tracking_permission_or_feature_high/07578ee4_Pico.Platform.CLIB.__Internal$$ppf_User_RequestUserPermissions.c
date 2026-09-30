/*
FUNCTION_NAME: Pico.Platform.CLIB.__Internal$$ppf_User_RequestUserPermissions
ENTRY_POINT: 07578ee4
PROGRAM: cac-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Removing unreachable block (ram,0x0757923c) */

uint Pico_Platform_CLIB___Internal__ppf_User_RequestUserPermissions(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07578ed4 with catch @ 07578ee4
                        */
                    /* try { // try from 07578ee8 to 07678f7f has its CatchHandler @ 07578ee8
                       catch() { ... } // from try @ 07578ee8 with catch @ 07578ee8
                       catch() { ... } // from try @ 07579004 with catch @ 07578ee8
                       catch() { ... } // from try @ 075790bc with catch @ 07578ee8
                       catch() { ... } // from try @ 0757910c with catch @ 07578ee8
                       catch() { ... } // from try @ 07579160 with catch @ 07578ee8 */
  FUN_03f13384(*(undefined8 *)(param_1 + 0x518));
  FUN_03f13384(PTR_DAT_0910bb38);
  FUN_03f13384(PTR_DAT_0910d208);
  FUN_03f13384(PTR_DAT_0910d210);
  FUN_03f13384(PTR_DAT_0910d218);
  FUN_03f13384(PTR_DAT_09111c20);
  *(undefined1 *)(unaff_x21 + 0xbea) = 1;
  puVar1 = PTR_DAT_09137518;
  if (unaff_x20 != 0) {
    plVar9 = *(long **)(unaff_x20 + 0x80);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09137518) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_07578f98;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)PTR_DAT_09137518,4);
LAB_07578f98:
      uVar7 = (*(code *)*puVar5)(plVar9);
      if ((uVar7 & 1) != 0) {
        uVar4 = 1;
        goto LAB_07579214;
      }
    }
    plVar9 = *(long **)(unaff_x20 + 0x88);
    uVar4 = 0;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0757900c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)puVar1,2);
LAB_0757900c:
      plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
      if (plVar9 == (long *)0x0) goto LAB_07579238;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0910d208) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07579074;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)PTR_DAT_0910d208,0);
LAB_07579074:
      plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
      puVar3 = PTR_DAT_09111c20;
      puVar2 = PTR_DAT_0910d218;
      puVar1 = PTR_DAT_0910d210;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_075790f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)puVar2,0);
LAB_075790f8:
        uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
          break;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07579160;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)puVar1,0);
LAB_07579160:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_07cbd754();
      } while ((uVar7 & 1) == 0);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0910bb38) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07579204;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)PTR_DAT_0910bb38,0);
LAB_07579204:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
      }
    }
LAB_07579214:
    return uVar4 & 1;
  }
LAB_07579238:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


