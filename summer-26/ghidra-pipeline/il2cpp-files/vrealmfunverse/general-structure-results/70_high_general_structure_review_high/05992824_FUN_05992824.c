/*
FUNCTION_NAME: FUN_05992824
ENTRY_POINT: 05992824
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05992b20) */
/* WARNING: Removing unreachable block (ram,0x05992c10) */

void FUN_05992824(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  long *plStack_a8;
  long local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_64 [4];
  
  if ((DAT_066d3909 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320348);
    FUN_02b3c81c(PTR_DAT_06320350);
    FUN_02b3c81c(PTR_DAT_063196e0);
    FUN_02b3c81c(System_Collections_Generic_Stack<Disc>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Stack<Entry>_TypeInfo);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    FUN_02b3c81c(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    DAT_066d3909 = 1;
  }
  local_64[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_05992d00();
  puVar3 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__;
  puVar4 = PTR_DAT_063203a0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = *(int *)(param_3 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05992e40(iVar1);
  FUN_05992f00(iVar1);
  FUN_058c4cd0(0);
  uVar7 = FUN_032b1148(0,*(undefined8 *)puVar3);
  FUN_05814cc8(local_64,uVar7,0);
  local_a0 = 0;
  local_b0 = 0;
  plStack_a8 = (long *)0x0;
  local_98 = local_64;
  FUN_05992fdc(&local_b0,param_2,param_3);
  local_80 = local_b0;
  local_b0 = 0;
  uStack_78 = plStack_a8;
  plStack_a8 = &local_80;
  iVar6 = FUN_05c52798(0);
  if (*(int *)(*(long *)PTR_DAT_063196e0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05caced0(iVar6 == 1,0);
  FUN_05cacf0c(1,0);
  FUN_059930e4(param_1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar8 = FUN_05993404();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x54);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__ + 0xe4) == 0)
  {
    thunk_FUN_02b9ad44(*(long *)Method_System_Collections_Generic_List<WeakReference>_Clear__);
  }
  FUN_057f2618(uVar2,0);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0585a458(1,0);
  uVar7 = FUN_059934a4(param_1,param_3);
  iVar6 = FUN_05993520(uVar7,param_3);
  puVar5 = System_Collections_Generic_Stack<Entry>_TypeInfo;
  puVar3 = PTR_DAT_06320348;
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      uVar7 = FUN_037a6268(param_3,iVar10,*(undefined8 *)puVar5);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_05993600(uVar7);
      if ((uVar9 & 1) == 0) {
        local_c0 = 0;
        puStack_b8 = (undefined8 *)0x0;
        FUN_05994b5c(&local_c0,param_2,uVar7);
        local_90 = local_c0;
        local_c0 = 0;
        uStack_88 = puStack_b8;
        puStack_b8 = &local_90;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread_0000018A_PostfixBurstDelegate__Invoke
                  (uVar7,0);
        FUN_05994f64(param_2,uVar7,iVar6 == iVar10);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0599c934(puStack_b8);
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_059936dc(param_2,uVar7,iVar6 == iVar10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar1 != iVar10);
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_05881840(lVar8,0);
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  uVar9 = FUN_05c887e8(0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4(uVar9,uVar9 & 0xffffffff);
  }
  FUN_05970274(lVar8,uVar9 & 0xffffffff,0);
  if (*(int *)(*(long *)PTR_DAT_06320350 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0599caf4(plStack_a8);
  lVar8 = local_a0;
  if (local_b0 == 0) {
    FUN_05814cd4(local_98,0);
    if (lVar8 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc(lVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


