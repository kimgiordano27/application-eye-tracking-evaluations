/*
FUNCTION_NAME: Shapes.Triangle$$set_DashShapeModifier
ENTRY_POINT: 037aea2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037aed38) */

void Shapes_Triangle__set_DashShapeModifier(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  int iVar12;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xd78));
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Scrollbar>__);
  thunk_FUN_01efb3a4(Method_System_Reflection_IntrospectionExtensions_GetTypeInfo__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__2__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                    );
  *(undefined1 *)(unaff_x22 + 0x55f) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((unaff_x21 & 1) == 0) {
    return;
  }
  in_stack_00000008 = 0;
  FUN_03038c08(&stack0x00000008,&stack0x00000018,*(undefined8 *)StringLiteral_564);
  in_stack_00000010 = in_stack_00000008;
  FUN_037aee94();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_037aeafc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_037aeafc:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = Method_System_Reflection_IntrospectionExtensions_GetTypeInfo__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<Scrollbar>__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aeb7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_037aeb7c:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      iVar12 = 7;
      iVar5 = 7;
      if (plVar7 == (long *)0x0) goto LAB_037aecc0;
LAB_037aec60:
      iVar12 = iVar5;
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_037aec98;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aebd8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_037aebd8:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,uVar8);
    }
    iVar5 = FUN_030f3778(in_stack_00000018,uVar8,*(undefined8 *)puVar3);
    if (iVar5 < 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_033395f4(&stack0x00000020,0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__2__
                  );
      iVar12 = 6;
      iVar5 = 6;
      if (plVar7 != (long *)0x0) goto LAB_037aec60;
      goto LAB_037aecc0;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f42ac(in_stack_00000018,iVar5,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_037aecb4;
    }
  }
LAB_037aec98:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_037aecb4:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_037aecc0:
  FUN_03038c68(&stack0x00000010,*(undefined8 *)StringLiteral_563);
  if ((iVar12 == 0) || (iVar12 == 7)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_033395f4(&stack0x00000020,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__2__
                );
  }
  return;
}


