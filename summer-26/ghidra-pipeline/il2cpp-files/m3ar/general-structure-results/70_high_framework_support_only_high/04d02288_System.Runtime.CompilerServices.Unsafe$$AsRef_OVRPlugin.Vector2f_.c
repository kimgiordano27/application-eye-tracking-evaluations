/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<OVRPlugin.Vector2f>
ENTRY_POINT: 04d02288
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d025cc) */

long System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_Vector2f>(ulong param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  plVar1 = in_stack_00000028;
  if ((param_1 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<int,_int>>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar4,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<int,_int>>:
    in_stack_00000018._4_4_ = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar4 = FUN_074f78cc((long)&stack0x00000018 + 4,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    plVar1 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<CopyMeshJobData>>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x24,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<CopyMeshJobData>>:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      lVar5 = FUN_0737b4e8(0x10,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_073712a0(lVar5,lVar4,0);
      do {
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0406aaec(lVar4);
        }
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04d02418;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar4,0);
LAB_04d02418:
        in_stack_00000018._4_4_ = (*(code *)*puVar2)(plVar1,puVar2[1]);
        FUN_07378df8(lVar5);
        uVar3 = FUN_074f78cc((long)&stack0x00000018 + 4,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
        FUN_073712a0(lVar5,uVar3,0);
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = *in_stack_00000028;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_04d024b0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x24,0);
FUN_04d024b0:
        uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      } while ((uVar7 & 1) != 0);
      lVar4 = FUN_0737b634(lVar5,0);
      goto FUN_04d024f8;
    }
    if (lVar4 != 0) goto FUN_04d024f8;
  }
  lVar4 = **(long **)(*(long *)(PTR_DAT_08f65618 + 0x90) + 0xb8);
FUN_04d024f8:
  plVar1 = in_stack_00000028;
  if (in_stack_00000028 != (long *)0x0) {
    lVar5 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_04d02558;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*(long *)PTR_DAT_08f65868,0);
FUN_04d02558:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  return lVar4;
}


