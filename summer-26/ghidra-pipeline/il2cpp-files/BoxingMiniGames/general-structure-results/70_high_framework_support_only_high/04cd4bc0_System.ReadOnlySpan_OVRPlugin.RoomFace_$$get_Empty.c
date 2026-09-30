/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.RoomFace>$$get_Empty
ENTRY_POINT: 04cd4bc0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_ReadOnlySpan<OVRPlugin_RoomFace>__get_Empty(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  undefined4 uVar6;
  long *plVar7;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
code_r0x04cd4bc0:
  puVar1 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar3 = thunk_FUN_0367fd24(uVar2,lVar3);
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      uVar2 = FUN_03642af0(uVar2,lVar3);
      FUN_03642988(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x20,uVar2,unaff_w19);
      uVar6 = 1;
      FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
LAB_04cd4cc8:
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return uVar6;
      }
LAB_04cd4dc8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar1 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar7 = (long *)*puVar1;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_04cd4b48;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,0);
FUN_04cd4b48:
    uVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      FUN_03159758(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0xa0,0);
      uVar6 = 0;
      goto LAB_04cd4cc8;
    }
    puVar1 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    unaff_x21 = (long *)*puVar1;
    if (unaff_x21 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          in_w9 = *piVar5;
          goto code_r0x04cd4bc0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x23,1);
  } while( true );
}


