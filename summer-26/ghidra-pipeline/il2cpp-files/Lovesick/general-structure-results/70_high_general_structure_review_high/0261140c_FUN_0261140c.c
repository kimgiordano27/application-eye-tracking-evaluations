/*
FUNCTION_NAME: FUN_0261140c
ENTRY_POINT: 0261140c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3
*/


void FUN_0261140c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 local_60 [16];
  
  if ((DAT_037833e9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8844);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_Core_DOSetter<Color2>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1749);
    thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_MemberMemberBinding_TypeInfo);
    DAT_037833e9 = 1;
  }
  puVar6 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  puVar4 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar3 = ZEXT816(0);
  if ((char)param_1[0x36] != '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_60 = FUN_0213f7cc(0);
    lVar7 = FUN_01380ca8(local_60,*(undefined8 *)puVar4);
    puVar5 = System_Linq_Expressions_MemberMemberBinding_TypeInfo;
    puVar4 = DG_Tweening_Core_DOGetter<Vector2>_TypeInfo;
    if (lVar7 == 0) goto LAB_026117c8;
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar11 = 0;
      uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar10 = *(long **)(lVar7 + 0x20 + uVar11 * 8);
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar10 + 300);
          bVar2 = *(byte *)(*(long *)puVar4 + 300);
          if ((bVar2 <= bVar1) &&
             (lVar9 = *(long *)(*plVar10 + 200),
             *(long *)(lVar9 + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
            bVar2 = *(byte *)(*(long *)puVar5 + 300);
            if ((bVar1 < bVar2) || (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_021404c4(plVar10,0);
            }
          }
        }
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8844);
    if (lVar7 == 0) goto LAB_026117c8;
    FUN_011c21b8(lVar7,param_1,*(undefined8 *)StringLiteral_1749,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0213f8cc(lVar7,0);
    *(undefined1 *)(param_1 + 0x71) = 1;
    auVar3 = local_60;
  }
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  local_60 = auVar3;
  FUN_026117cc(param_1);
  (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  FUN_0260c1f0(param_1);
  FUN_0260c3f0(param_1);
  FUN_0260c5f0(param_1);
  FUN_0260c7f0(param_1);
  FUN_0260cbbc(param_1);
  FUN_0260c9f0(param_1);
  FUN_0260cd54(param_1);
  FUN_0260ceec(param_1);
  FUN_0260d0b8(param_1);
  FUN_0260d5b4(param_1);
  FUN_0260d284(param_1);
  FUN_0260d41c(param_1);
  FUN_0260d780(param_1);
  FUN_0260d980(param_1);
  FUN_0260db80(param_1);
  FUN_0260dd4c(param_1);
  FUN_0260df18(param_1);
  FUN_0260e118(param_1);
  FUN_0260e318(param_1);
  FUN_0260e518(param_1);
  FUN_0260e718(param_1);
  FUN_0260e8e4(param_1);
  FUN_0260ea7c(param_1);
  FUN_0260ec14(param_1);
  FUN_0260edac(param_1);
  FUN_0260ef78(param_1);
  FUN_0260f178(param_1);
  FUN_0260f378(param_1);
  FUN_0260f578(param_1);
  FUN_0260f778(param_1);
  FUN_0260f978(param_1);
  FUN_0260fb78(param_1);
  FUN_0260fd78(param_1);
  FUN_0260ff78(param_1);
  FUN_02610178(param_1);
  FUN_02610378(param_1);
  FUN_02610578(param_1);
  FUN_02610778(param_1);
  lVar7 = param_1[4];
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_02681b9c(lVar7,0,0);
  if ((uVar11 & 1) != 0) {
    if (param_1[4] == 0) goto LAB_026117c8;
    FUN_02119f88(param_1[4],0);
  }
  lVar7 = param_1[3];
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_02681b9c(lVar7,0,0);
  if ((uVar11 & 1) != 0) {
    if (param_1[3] == 0) {
LAB_026117c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02119f88(param_1[3],0);
  }
  return;
}


