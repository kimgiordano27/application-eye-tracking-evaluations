/*
FUNCTION_NAME: OVRCustomSkeleton$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 036d5d98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void OVRCustomSkeleton__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x21;
  
  thunk_FUN_01ee6d7c();
  if (DAT_048342fa == '\0') {
    thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass33_0_<DOMoveX>b__0__);
    DAT_048342fa = '\x01';
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x21;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar1 = FUN_036d5f60();
    *(int *)(*(long *)(*unaff_x21 + 0xb8) + 8) = iVar1;
    if (iVar1 != 0) {
      lVar4 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
      lVar2 = *(long *)(lVar4 + 0x38);
      if (lVar2 == 0) {
        FUN_01ecafa0(lVar4);
        lVar2 = *(long *)(lVar4 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      uVar3 = FUN_0340f378(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass34_0_<DOMoveY>b__0__
                           ,**(undefined8 **)(lVar2 + 0xb8),0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
      FUN_0403f2cc(uVar3,0);
    }
  }
  if (*(int *)(*(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass25_0_<DOOffset>b__1__
              + 0xe0) != 0) {
    return;
  }
  thunk_FUN_01ee6d7c();
  return;
}


