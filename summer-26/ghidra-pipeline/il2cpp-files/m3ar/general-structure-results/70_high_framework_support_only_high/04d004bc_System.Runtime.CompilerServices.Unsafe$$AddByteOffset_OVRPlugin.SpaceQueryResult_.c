/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04d004bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d00614) */

undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  long unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04d004f8;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_0406ae20(unaff_x23,param_3,0);
LAB_04d004f8:
      uVar3 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
      plVar1 = in_stack_00000028;
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_0737b634();
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
          return uVar4;
        }
        lVar6 = *in_stack_00000028;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 == 0)
        goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRTriangleMesh_Triangle>;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04d0056c;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      lVar5 = *plVar1;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar6) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04d00460;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar6,0);
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
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x23 = in_stack_00000028;
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_04d0056c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04d005a0;
    }
  }
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRTriangleMesh_Triangle>:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
LAB_04d005a0:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}


