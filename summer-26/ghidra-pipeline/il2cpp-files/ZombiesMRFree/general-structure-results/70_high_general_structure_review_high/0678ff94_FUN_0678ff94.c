/*
FUNCTION_NAME: FUN_0678ff94
ENTRY_POINT: 0678ff94
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0678ff94(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = param_6;
  if ((DAT_073a1614 & 1) == 0) {
    FUN_02fe925c(d2<bt,_ek>_TypeInfo);
    FUN_02fe925c(d2<bz,_eh>_TypeInfo);
    FUN_02fe925c(eb_e<eb_c>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo);
    FUN_02fe925c(eb_e<eb_d>_TypeInfo);
    FUN_02fe925c(ed<i<int>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9a540);
    FUN_02fe925c(PTR_DAT_06f9c670);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<PunctureCollider>_TypeInfo);
    FUN_02fe925c(Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo);
    DAT_073a1614 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_78 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_03d81c5c(local_98,param_2,
               *(undefined8 *)
                Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo,
               &local_78,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)eb_e<eb_c>_TypeInfo);
  lVar9 = param_3 + 0x18;
  uStack_68 = local_98._8_8_;
  local_70 = local_98._0_8_;
  uStack_58 = uStack_80;
  uStack_60 = local_88;
  uVar2 = FUN_0676cdd8(lVar9,0);
  lVar6 = local_78;
  puVar1 = System_Collections_Generic_List<TypeSpec>_TypeInfo;
  if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  *(undefined8 *)(local_78 + 0x10) = param_4;
  *(undefined8 *)(local_78 + 0x18) = param_5;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xa8);
  FUN_0678fda8(param_1,param_3,&local_78,uVar2 & 1);
  if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_0664d588(&local_70,local_78 + 0x18,0,0);
  if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_0664d908(&local_70,local_78 + 0x10,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar5 = FUN_06643c7c(&uStack_48,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06f9c670 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar6 = FUN_066a7ae8(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar7 = FUN_03e6bd60(*(long *)(lVar6 + 0x10),
                           *(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<PunctureCollider>_TypeInfo);
      auVar10 = FUN_0677050c(lVar9,0);
      uVar3 = FUN_06770600(lVar9,0);
      lVar9 = local_78;
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0676e0c4(auVar10._0_8_,auVar10._8_8_,uVar3,uVar7,lVar9 + 0x24,0);
      FUN_0664d908(&local_70,&uStack_48,0);
      goto LAB_06790220;
    }
  }
  if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  auVar10 = NEON_fmov(0xbf800000,4);
  *(long *)(local_78 + 0x2c) = auVar10._8_8_;
  *(long *)(local_78 + 0x24) = auVar10._0_8_;
LAB_06790220:
  puVar1 = ed<i<int>>_TypeInfo;
  lVar9 = *(long *)ed<i<int>>_TypeInfo;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)d2<bt,_ek>_TypeInfo);
    FUN_04b7cfac(lVar6,uVar7,*(undefined8 *)eb_e<eb_d>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar8 = lVar6;
    thunk_FUN_03048534(plVar8,lVar6);
  }
  FUN_03d81dc8(&local_70,lVar6,*(undefined8 *)d2<bz,_eh>_TypeInfo);
  FUN_0664e020(&local_70,0);
  return;
}


