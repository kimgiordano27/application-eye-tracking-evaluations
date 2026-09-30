/*
FUNCTION_NAME: FUN_01d45240
ENTRY_POINT: 01d45240
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d45578) */

void FUN_01d45240(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar3 = Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo;
  if ((DAT_0377f4da & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1247);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Nullable<NativeArray<float>>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ef6e0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_UI_InputSystemUIInputModule_OnTrackedDevicePositionCallback__
                      );
    DAT_0377f4da = 1;
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  if ((param_2 != 0) && (**(long **)(lVar7 + 0xb8) != 0)) {
    uStack_44 = *(undefined4 *)(param_1 + 0x220);
    local_48 = *(undefined4 *)(param_2 + 0x5c);
    uVar8 = FUN_010c93ec(**(long **)(lVar7 + 0xb8),
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_UI_InputSystemUIInputModule_OnTrackedDevicePositionCallback__
                         ,&uStack_44,&local_48,*(undefined8 *)StringLiteral_1247);
    if (*(long *)(param_2 + 0x10) != param_1) {
      uVar8 = FUN_01d33788(0);
      uVar9 = thunk_FUN_00d48444(Method_System_Nullable<NativeArray<float>>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar9);
    }
    if (*(long *)(param_2 + 0x30) != -1) {
      uVar8 = FUN_01d337c8(0);
      uVar9 = thunk_FUN_00d48444(Method_System_Nullable<NativeArray<float>>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar9);
    }
    if ((*(int *)(param_2 + 0x20) == -1) && (*(int *)(param_2 + 0x24) == -1)) {
      uVar8 = FUN_01d332d0(0);
      uVar9 = thunk_FUN_00d48444(Method_System_Nullable<NativeArray<float>>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar9);
    }
    if (param_3 == -1) {
      param_3 = *(long *)(param_1 + 0x30);
    }
    FUN_01d54f5c(param_2,param_3,0);
    if (*(long *)(param_1 + 0x30) <= param_3) {
      if ((param_3 == 0x7fffffffffffffff) || ((param_3 < 0 && (1 < -0x8000000000000000 - param_3))))
      {
        uVar8 = FUN_00da519c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,*(undefined8 *)Method_System_Nullable<NativeArray<float>>__ctor__);
      }
      *(long *)(param_1 + 0x30) = param_3 + 1;
    }
    iVar4 = *(int *)(param_2 + 0x24);
    iVar10 = -1;
    if (iVar4 == -1) {
      uVar9 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
      *(int *)(param_2 + 0x28) = iVar4;
      uVar9 = FUN_01d482ec(param_1,0,param_2,0x10,1);
      iVar10 = *(int *)(param_2 + 0x28);
      *(int *)(param_2 + 0x24) = iVar10;
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    }
    if (*(int *)(param_2 + 0x20) != -1) {
      if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01d88fe4(*(long *)(param_1 + 0x68),*(int *)(param_2 + 0x20),param_2,0);
      iVar10 = *(int *)(param_2 + 0x24);
    }
    if (iVar10 != -1) {
      if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01d88fe4(*(long *)(param_1 + 0x68),iVar10,param_2,0);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01d587b0(*(long *)(param_1 + 0x38),param_2,0);
    iVar4 = FUN_01d54f78(param_2,0);
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    if (iVar4 == 2) {
      FUN_01d48480(param_1,uVar1,0,2);
    }
    else {
      uVar5 = FUN_01d56c38(param_2,uVar1,0);
      uVar2 = *(undefined4 *)(param_2 + 0x24);
      uVar6 = FUN_01d56c38(param_2,uVar2,0);
      FUN_01d48614(param_1,uVar1,0,uVar5,uVar2,0,uVar6);
    }
    if ((*(long *)(param_1 + 400) != 0) && (0 < *(int *)(*(long *)(param_1 + 400) + 0x18))) {
      System_Xml_XmlEncodedRawTextWriter__FlushEncoder(param_1,param_2,0x10,0);
    }
    FUN_01d48e14(param_1,uVar9,param_2,0x10);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar3;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      FUN_01d21f88(**(long **)(lVar7 + 0xb8),uVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


