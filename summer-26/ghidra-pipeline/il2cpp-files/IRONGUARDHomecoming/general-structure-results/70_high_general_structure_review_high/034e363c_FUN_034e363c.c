/*
FUNCTION_NAME: FUN_034e363c
ENTRY_POINT: 034e363c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_034e363c(long param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 034e3644 to 035e364b has its CatchHandler @ 034e364c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e362c with catch @ 034e364c
                       catch(type#2 @ 00000000) { ... } // from try @ 034e3644 with catch @ 034e364c
                        */
  if ((DAT_04832dcd & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    DAT_04832dcd = 1;
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = *(long *)
             Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    iVar3 = FUN_03413064(param_1,**(undefined8 **)(lVar4 + 0xb8),0);
    if (iVar3 != -1) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ushort>__
                                );
      FUN_034f6754(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_VolumeStack_GetComponent<DepthOfField>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar6);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar3 = FUN_034e382c(param_1);
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        if (-1 < iVar3) {
          iVar3 = iVar3 + 1;
          goto LAB_034e3788;
        }
        param_2 = *(long *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
        ;
      }
      else {
        if (*(int *)(param_1 + 0x10) == 0) {
          param_2 = **(long **)(*(long *)
                                 Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                               + 0xb8);
        }
        else if ((0 < *(int *)(param_2 + 0x10)) &&
                (sVar2 = FUN_03409f80(param_2,0,0), sVar2 != 0x2e)) {
          param_2 = FUN_03405678(*(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                                 ,param_2,0);
        }
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            return param_2;
          }
          param_1 = FUN_03410500(param_1,0,iVar3,0);
        }
      }
      lVar4 = FUN_03405678(param_1,param_2,0);
      return lVar4;
    }
    if (-1 < iVar3) {
LAB_034e3788:
      lVar4 = FUN_03410500(param_1,0,iVar3,0);
      return lVar4;
    }
  }
  return param_1;
}


