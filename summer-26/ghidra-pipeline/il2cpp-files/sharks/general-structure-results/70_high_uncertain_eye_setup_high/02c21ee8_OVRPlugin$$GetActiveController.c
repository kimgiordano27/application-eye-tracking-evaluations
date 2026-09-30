/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 02c21ee8
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c22074) */

undefined4 OVRPlugin__GetActiveController(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 in_x9;
  int *piVar8;
  uint uVar9;
  uint *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined4 uVar10;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    uVar6 = (uint)in_x9;
    if (0 < (int)uVar6) {
      uVar9 = 0;
      while( true ) {
        if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22 + uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (*(ushort *)(unaff_x23 + (long)(int)(unaff_w22 + uVar9) * 2 + 0x20) !=
            (ushort)*(byte *)(param_1 + (int)uVar9 + 0x20)) break;
        if (uVar6 - 1 == uVar9) {
          *unaff_x19 = uVar6;
          plVar4 = *(long **)(unaff_x24 + 0x10);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                     (plVar4,param_1,*(undefined8 *)(*plVar4 + 0x310));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944();
          }
          puVar3 = (undefined4 *)thunk_FUN_01861d10();
          uVar10 = *puVar3;
          uVar6 = 7;
          goto LAB_02c21f94;
        }
        uVar9 = uVar9 + 1;
        if ((unaff_w21 <= (int)uVar9) || ((int)uVar6 <= (int)uVar9)) break;
      }
    }
    do {
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02c21e50;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c21e50:
      uVar7 = (*(code *)*puVar2)();
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
        uVar6 = 8;
LAB_02c21f94:
        puVar1 = PTR_DAT_037f3288;
        plVar4 = (long *)thunk_FUN_01861ac0();
        if (plVar4 == (long *)0x0) goto LAB_02c22008;
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) {
LAB_02c21fe0:
          puVar2 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar1,0);
        }
        else {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          while (*(long *)(piVar8 + -2) != *(long *)puVar1) {
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
            if (uVar7 == 0) goto LAB_02c21fe0;
          }
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        }
        (*(code *)*puVar2)(plVar4,puVar2[1]);
LAB_02c22008:
        if ((uVar6 | 8) == 8) {
          uVar10 = 0xffffffff;
          *unaff_x19 = 0;
        }
        return uVar10;
      }
      lVar5 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_02c21eb0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c21eb0:
      lVar5 = (*(code *)*puVar2)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar11 = *unaff_x27;
      param_1 = thunk_FUN_01861ac0(lVar5,uVar11);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar5,uVar11);
      }
    } while (unaff_w21 < 1);
    in_x9 = *(undefined8 *)(param_1 + 0x18);
  } while( true );
}


