/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e7b370
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7b670) */
/* WARNING: Removing unreachable block (ram,0x04e7b724) */

void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  FUN_077e9ae8();
  if (unaff_x23 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04e7b488;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_04e7b488:
    puVar2 = PTR_DAT_08e6a288;
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar3 = PTR_DAT_08e6a290;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04e7b4f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_04e7b4f8:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_04e7b664;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_04e7b63c;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04e7b570;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar5,lVar7,0);
LAB_04e7b570:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar9 = FUN_04e7b7f8();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar9 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar9 = FUN_077e9ba0(param_1,iVar1,0);
          if ((uVar9 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_077e9b24();
          }
        }
      }
      else {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(param_1,iVar1,0);
      }
    } while( true );
  }
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
  }
LAB_04e7b63c:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_04e7b658:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_04e7b664:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_04e7b710;
    uVar9 = 0;
    do {
      uVar6 = FUN_077e9ba0();
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7b710;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20();
      }
      uVar9 = uVar9 + 1;
    } while (unaff_x21 != uVar9);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


