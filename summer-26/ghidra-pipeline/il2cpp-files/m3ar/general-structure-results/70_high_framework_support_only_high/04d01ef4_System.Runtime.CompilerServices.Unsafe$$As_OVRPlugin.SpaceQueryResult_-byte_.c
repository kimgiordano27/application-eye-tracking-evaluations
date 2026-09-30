/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-byte>
ENTRY_POINT: 04d01ef4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d020a4) */

undefined8
System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_byte>
          (undefined1 param_1 [16])

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  long *in_stack_00000058;
  
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  do {
    uStack0000000000000040 = in_stack_00000018;
    FUN_07378df8();
    FUN_04273634(&stack0x00000030,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    FUN_073712a0();
    plVar1 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000058;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto System_Runtime_CompilerServices_Unsafe__As<RenderGraph_CompiledResourceInfo,_char>;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000058,*unaff_x24,0);
System_Runtime_CompilerServices_Unsafe__As<RenderGraph_CompiledResourceInfo,_char>:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000058;
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_0737b634();
      plVar1 = in_stack_00000058;
      if (in_stack_00000058 == (long *)0x0) {
        return uVar3;
      }
      lVar5 = *in_stack_00000058;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto System_Runtime_CompilerServices_Unsafe__AsRef<BoneWeight>;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0406aaec(lVar5);
    }
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__As<MeshGenerator_BackgroundRepeatInstance,_char>;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar5,0);
System_Runtime_CompilerServices_Unsafe__As<MeshGenerator_BackgroundRepeatInstance,_char>:
    (*(code *)*puVar2)(&stack0x00000008,plVar1,puVar2[1]);
    uStack0000000000000030 = in_stack_00000008;
    uStack0000000000000038 = in_stack_00000010;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto System_Runtime_CompilerServices_Unsafe__AsRef<char>;
    }
  }
System_Runtime_CompilerServices_Unsafe__AsRef<BoneWeight>:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000058,*(long *)PTR_DAT_08f65868,0);
System_Runtime_CompilerServices_Unsafe__AsRef<char>:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}


