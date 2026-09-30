/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<byte,-OVRPlugin.RoomFace>
ENTRY_POINT: 03ea1fa8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Runtime_CompilerServices_Unsafe__As<byte,_OVRPlugin_RoomFace>(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
  if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    FUN_0367c9fc(lVar7);
  }
  uVar2 = thunk_FUN_03652da4();
  uVar3 = FUN_05e31434(uVar10,uVar2,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar7 = FUN_03e8b06c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar7 != 0) {
      FUN_03e6a6c8();
      uVar8 = 0;
      uVar10 = 1;
      goto System_Runtime_CompilerServices_Unsafe__As<FrameTiming,_char>;
    }
  }
  else {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar10 = thunk_FUN_03652da4();
    uVar3 = FUN_072652bc(uVar10,0);
    if ((uVar3 & 1) == 0) {
      uVar10 = 0;
      uVar8 = 2;
      goto System_Runtime_CompilerServices_Unsafe__As<FrameTiming,_char>;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar10 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar4 = (long *)FUN_07256a04(uVar10,0);
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__As<GPUDrivenPackedRendererData,_IntPtr>;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__As<GPUDrivenPackedRendererData,_IntPtr>:
      (*(code *)*puVar6)(plVar4);
      lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
      puVar6 = (undefined8 *)thunk_FUN_0367ff68();
      uVar8 = 0;
      uVar10 = 1;
      uVar2 = *puVar6;
      uVar1 = *(undefined4 *)(puVar6 + 2);
      unaff_x20[1] = puVar6[1];
      *unaff_x20 = uVar2;
      *(undefined4 *)(unaff_x20 + 2) = uVar1;
      goto System_Runtime_CompilerServices_Unsafe__As<FrameTiming,_char>;
    }
  }
  uVar10 = 0;
  uVar8 = 3;
System_Runtime_CompilerServices_Unsafe__As<FrameTiming,_char>:
  *unaff_x19 = uVar8;
  return uVar10;
}


