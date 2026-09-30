/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04d004b4
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


/* WARNING: Removing unreachable block (ram,0x04d00614) */

undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04d004f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(unaff_x23,param_3,0);
LAB_04d004f8:
    uVar6 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    plVar1 = in_stack_00000028;
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_0737b634();
      plVar1 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
        return uVar3;
      }
      lVar5 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0)
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRTriangleMesh_Triangle>;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
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
          goto LAB_04d00460;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar5,0);
LAB_04d00460:
    in_stack_00000018._4_1_ = (*(code *)*puVar2)(plVar1,puVar2[1]);
    FUN_07378df8();
    FUN_0744f3fc((long)&stack0x00000018 + 4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    FUN_073712a0();
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *in_stack_00000028;
    param_3 = *unaff_x24;
    unaff_x23 = in_stack_00000028;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04d005a0;
    }
  }
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRTriangleMesh_Triangle>:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
LAB_04d005a0:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}


