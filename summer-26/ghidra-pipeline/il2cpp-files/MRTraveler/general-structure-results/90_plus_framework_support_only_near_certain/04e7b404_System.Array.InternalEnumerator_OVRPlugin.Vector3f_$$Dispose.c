/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04e7b404
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7b670) */
/* WARNING: Removing unreachable block (ram,0x04e7b724) */

void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  lVar4 = thunk_FUN_03cf5234();
  FUN_077e9ab0();
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04e7b488;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_04e7b488:
    puVar2 = PTR_DAT_08e6a288;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar3 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e7b4f8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_04e7b4f8:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04e7b664;
        lVar4 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_04e7b63c;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e7b570;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_04e7b570:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar10 = FUN_04e7b7f8();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar10 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar10 = FUN_077e9ba0(lVar4,iVar1,0);
          if ((uVar10 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_077e9b24();
          }
        }
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(lVar4,iVar1,0);
      }
    } while( true );
  }
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
  }
LAB_04e7b63c:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_04e7b658:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04e7b664:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_04e7b710;
    uVar10 = 0;
    do {
      uVar7 = FUN_077e9ba0();
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7b710;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20();
      }
      uVar10 = uVar10 + 1;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


