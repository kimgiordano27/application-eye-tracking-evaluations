/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04d02284
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d025cc) */

long System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceQueryResult>(code *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  uVar2 = (*param_1)();
  plVar1 = in_stack_00000028;
  if ((uVar2 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0406aaec(lVar5);
    }
    lVar6 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<int,_int>>;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar1,lVar5,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<int,_int>>:
    in_stack_00000018._4_4_ = (*(code *)*puVar3)(plVar1,puVar3[1]);
    lVar5 = FUN_074f78cc((long)&stack0x00000018 + 4,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    plVar1 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *in_stack_00000028;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<CopyMeshJobData>>;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x24,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<CopyMeshJobData>>:
    uVar2 = (*(code *)*puVar3)(plVar1,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_0737b4e8(0x10,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_073712a0(lVar6,lVar5,0);
      do {
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0406aaec(lVar5);
        }
        lVar7 = *plVar1;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04d02418;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar1,lVar5,0);
LAB_04d02418:
        in_stack_00000018._4_4_ = (*(code *)*puVar3)(plVar1,puVar3[1]);
        FUN_07378df8(lVar6);
        uVar4 = FUN_074f78cc((long)&stack0x00000018 + 4,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
        FUN_073712a0(lVar6,uVar4,0);
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *in_stack_00000028;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_04d024b0;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x24,0);
FUN_04d024b0:
        uVar2 = (*(code *)*puVar3)(plVar1,puVar3[1]);
      } while ((uVar2 & 1) != 0);
      lVar5 = FUN_0737b634(lVar6,0);
      goto FUN_04d024f8;
    }
    if (lVar5 != 0) goto FUN_04d024f8;
  }
  lVar5 = **(long **)(*(long *)(PTR_DAT_08f65618 + 0x90) + 0xb8);
FUN_04d024f8:
  plVar1 = in_stack_00000028;
  if (in_stack_00000028 != (long *)0x0) {
    lVar6 = *in_stack_00000028;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_04d02558;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
FUN_04d02558:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  }
  return lVar5;
}


