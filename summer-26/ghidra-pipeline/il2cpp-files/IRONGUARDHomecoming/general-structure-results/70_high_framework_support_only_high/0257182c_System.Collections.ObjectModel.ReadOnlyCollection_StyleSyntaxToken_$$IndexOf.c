/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<StyleSyntaxToken>$$IndexOf
ENTRY_POINT: 0257182c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02571900) */
/* WARNING: Removing unreachable block (ram,0x02571b30) */

undefined8
System_Collections_ObjectModel_ReadOnlyCollection<StyleSyntaxToken>__IndexOf
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *plVar8;
  long *unaff_x20;
  long in_stack_00000020;
  long in_stack_00000028;
  
code_r0x0257182c:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02571820;
LAB_02571838:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,uVar3);
    }
    FUN_027125fc(*(long *)(in_stack_00000028 + 0x58),uVar3,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x50));
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025717d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_025717d8:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_025718f4;
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_025718cc;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02571838;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02571820:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0257182c;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_025718e8;
    }
  }
LAB_025718cc:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_025718e8:
  (*(code *)*puVar2)();
LAB_025718f4:
  plVar8 = *(long **)(in_stack_00000028 + 0x48);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0257197c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_0257197c:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(in_stack_00000028 + 0x60) = uVar3;
  thunk_FUN_01f51358();
  plVar8 = *(long **)(in_stack_00000028 + 0x60);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_02571a00;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
FUN_02571a00:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      FUN_02571cb4();
      *(undefined8 *)(in_stack_00000028 + 0x60) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x60),0);
      return 0;
    }
    plVar8 = *(long **)(in_stack_00000028 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02571a8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02571a8c:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_027125fc(*(long *)(in_stack_00000028 + 0x58),uVar3,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x50));
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(in_stack_00000028 + 0x18) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x18),uVar3);
      *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
      return 1;
    }
    plVar8 = *(long **)(in_stack_00000028 + 0x60);
  } while( true );
}


