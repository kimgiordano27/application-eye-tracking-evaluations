/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 02c21e2c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c22074) */

undefined4 OVRPlugin__GetSystemHeadsetType(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  uint uVar10;
  uint *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined4 uVar11;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x02c21e2c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02c21e1c;
LAB_02c21e34:
  puVar2 = (undefined8 *)FUN_0185dba8();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      uVar11 = 0;
      uVar8 = 8;
LAB_02c21f94:
      puVar1 = PTR_DAT_037f3288;
      plVar5 = (long *)thunk_FUN_01861ac0();
      if (plVar5 == (long *)0x0) goto LAB_02c22008;
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_02c21fe0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02c21eb0;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c21eb0:
    lVar7 = (*(code *)*puVar2)();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar12 = *unaff_x27;
    lVar4 = thunk_FUN_01861ac0(lVar7,uVar12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar7,uVar12);
    }
    if (0 < unaff_w21) {
      uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
      if (0 < (int)uVar8) {
        uVar10 = 0;
        while( true ) {
          if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22 + uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (*(ushort *)(unaff_x23 + (long)(int)(unaff_w22 + uVar10) * 2 + 0x20) !=
              (ushort)*(byte *)(lVar4 + (int)uVar10 + 0x20)) break;
          if (uVar8 - 1 == uVar10) {
            *unaff_x19 = uVar8;
            plVar5 = *(long **)(unaff_x24 + 0x10);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                       (plVar5,lVar4,*(undefined8 *)(*plVar5 + 0x310));
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc944();
            }
            puVar6 = (undefined4 *)thunk_FUN_01861d10();
            uVar11 = *puVar6;
            uVar8 = 7;
            goto LAB_02c21f94;
          }
          uVar10 = uVar10 + 1;
          if ((unaff_w21 <= (int)uVar10) || ((int)uVar8 <= (int)uVar10)) break;
        }
      }
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x29;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02c21e34;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02c21e1c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x02c21e2c;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02c21ffc;
    }
  }
LAB_02c21fe0:
  puVar2 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar1,0);
LAB_02c21ffc:
  (*(code *)*puVar2)(plVar5,puVar2[1]);
LAB_02c22008:
  if ((uVar8 | 8) == 8) {
    uVar11 = 0xffffffff;
    *unaff_x19 = 0;
  }
  return uVar11;
}


