/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.RoomFace>$$GetHashCode
ENTRY_POINT: 04cd4b38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 System_ReadOnlySpan<OVRPlugin_RoomFace>__GetHashCode(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined4 unaff_w19;
  undefined4 uVar6;
  long *unaff_x21;
  long *plVar7;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
FUN_04cd4b48:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x21,param_1[1]);
    if ((uVar1 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      FUN_03159758(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0xa0,0);
      uVar6 = 0;
LAB_04cd4cc8:
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return uVar6;
      }
LAB_04cd4dc8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar7 = (long *)*puVar2;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,1);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar4 = thunk_FUN_0367fd24(uVar3,lVar4);
    if (lVar4 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      uVar3 = FUN_03642af0(uVar3,lVar4);
      FUN_03642988(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x20,uVar3,unaff_w19);
      uVar6 = 1;
      FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_04cd4cc8;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    unaff_x21 = (long *)*puVar2;
    if (unaff_x21 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar4 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_04cd4b48;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_0367cd30(unaff_x21,*unaff_x23,0);
  } while( true );
}


