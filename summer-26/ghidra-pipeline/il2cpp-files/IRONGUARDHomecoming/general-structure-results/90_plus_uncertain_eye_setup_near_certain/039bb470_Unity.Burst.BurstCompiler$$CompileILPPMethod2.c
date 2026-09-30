/*
FUNCTION_NAME: Unity.Burst.BurstCompiler$$CompileILPPMethod2
ENTRY_POINT: 039bb470
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039bb8f0) */
/* WARNING: Removing unreachable block (ram,0x039bb6a0) */
/* WARNING: Removing unreachable block (ram,0x039bb8d0) */
/* WARNING: Removing unreachable block (ram,0x039bb774) */
/* WARNING: Removing unreachable block (ram,0x039bb7fc) */

void Unity_Burst_BurstCompiler__CompileILPPMethod2(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
code_r0x039bb470:
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_039bb4ac;
    }
    in_x9 = in_x9 - 1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
LAB_039bb490:
  puVar1 = (undefined8 *)FUN_01ecb238(in_stack_00000018,param_3,0);
LAB_039bb4ac:
  lVar2 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)FUN_0265d924(*(long *)(lVar2 + 0x10),
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039bb52c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x21,0);
LAB_039bb52c:
    uVar6 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar6 & 1) == 0) break;
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039bb588;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x23,0);
LAB_039bb588:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0397b860();
    uVar5 = FUN_039812f8();
    lVar2 = *unaff_x29;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *unaff_x29;
    }
    FUN_039763a8(uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xd0),0);
    FUN_039baab4();
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_039bb684;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039bb684:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
  }
  lVar2 = *in_stack_00000018;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_039bb444;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(in_stack_00000018,*unaff_x21,0);
LAB_039bb444:
  uVar6 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  if ((uVar6 & 1) == 0) {
    if (in_stack_00000018 == (long *)0x0) goto LAB_039bb768;
    lVar2 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 == 0) goto LAB_039bb740;
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    goto LAB_039bb728;
  }
  param_1 = *in_stack_00000018;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)StringLiteral_5369;
  if (in_x9 != 0) goto code_r0x039bb470;
  goto LAB_039bb490;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_039bb728:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_039bb75c;
    }
  }
LAB_039bb740:
  puVar1 = (undefined8 *)
           FUN_01ecb238(in_stack_00000018,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_039bb75c:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_039bb768:
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03982cc4();
  FUN_039bc060();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x18);
    System_ComponentModel_ArrayConverter___ctor();
    if (lVar2 != 0) {
      FUN_039c2c88(lVar2,in_stack_00000010);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


