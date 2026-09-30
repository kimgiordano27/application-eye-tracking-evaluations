/*
FUNCTION_NAME: FUN_0208ad84
ENTRY_POINT: 0208ad84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


void FUN_0208ad84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint local_44;
  
  puVar2 = Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Peek__;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208acb4 with catch @ 0208ad88
                        */
  if ((DAT_0482f759 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector3>__ctor__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector4>__ctor__)
    ;
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Peek__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Pop__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector2>__ctor__)
    ;
    DAT_0482f759 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector4>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_44 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar6 = FUN_0406d8e4(*(undefined8 *)puVar2,0);
  if ((uVar6 & 1) == 0) {
    FUN_0406d5ac(*(undefined8 *)puVar2,0,0);
  }
  iVar5 = FUN_0406d680(*(undefined8 *)puVar2,0);
  local_70 = CONCAT44(local_70._4_4_,iVar5);
  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_70);
  FUN_03406290(*(undefined8 *)puVar3,uVar7,0);
  FUN_0208b5e0();
  if (iVar5 != 0) {
    lVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector3>__ctor__
                         ,iVar5);
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector2>__ctor__;
    puVar2 = Method_System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_Pop__;
    local_44 = 0;
    if (0 < iVar5) {
      do {
        uVar7 = FUN_035683d0(&local_44,0);
        uVar7 = FUN_03405678(*(undefined8 *)puVar2,uVar7,0);
        uVar7 = FUN_0406d878(uVar7,0);
        FUN_03405678(*(undefined8 *)puVar1,uVar7,0);
        FUN_0208b5e0();
        uVar4 = local_44;
        lVar9 = (long)(int)local_44;
        local_70 = 0;
        uStack_68 = 0;
        FUN_03563658(&local_70,uVar7,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar9 = lVar8 + lVar9 * 0x10;
        *(undefined8 *)(lVar9 + 0x28) = uStack_68;
        *(undefined8 *)(lVar9 + 0x20) = local_70;
        local_44 = local_44 + 1;
      } while ((int)local_44 < iVar5);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_037bd9b8(&local_60,lVar8,0);
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
    FUN_0208b66c(param_1,&local_90);
  }
  return;
}


