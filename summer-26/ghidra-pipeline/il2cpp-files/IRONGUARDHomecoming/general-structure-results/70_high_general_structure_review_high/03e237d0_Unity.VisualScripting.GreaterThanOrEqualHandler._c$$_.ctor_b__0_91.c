/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_91
ENTRY_POINT: 03e237d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(PTR_DAT_045799e8);
  *(undefined1 *)(unaff_x21 + 0x822) = 1;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar8,0,0);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (plVar4 = (long *)FUN_03e18b6c(), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03e23880;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__,
                          0);
LAB_03e23880:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar2 != 0) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_045799e8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ed64(*(undefined8 *)puVar1,0);
  return 1;
}


