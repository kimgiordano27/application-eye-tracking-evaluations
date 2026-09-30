/*
FUNCTION_NAME: FUN_059b5e18
ENTRY_POINT: 059b5e18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_8
*/


void FUN_059b5e18(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  float local_84;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined1 local_64 [4];
  
  if ((DAT_066d3a53 & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                );
    FUN_02b3c81c(Method_System_Attribute_GetCustomAttributes__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(Method_System_Attribute_GetCustomAttributes__);
    DAT_066d3a53 = 1;
  }
  local_64[0] = 0;
  if (param_2 == 0) {
LAB_059b637c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar13 = *(long *)(param_2 + 0x28);
  iVar8 = *(int *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x34);
  cVar2 = *(char *)(param_2 + 0x35);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = FUN_05c8e378(lVar13,0,0);
  if ((uVar9 & 1) != 0) {
    plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
    if (plVar10 != (long *)0x0) {
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar12,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar13;
        thunk_FUN_02bb0e9c(plVar10 + 4,lVar13);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c45180(*(undefined8 *)Method_System_Attribute_GetCustomAttributes__,plVar10,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_059b637c;
  }
  uVar12 = FUN_032b1148(6,*(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                       );
  FUN_05814cd0(local_64,param_1,uVar12,0);
  local_78 = 0;
  puStack_70 = local_64;
  if ((cVar1 == '\0') && (iVar7 = FUN_05c976d4(0), iVar7 != 0)) {
    if (iVar8 == -1) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(long *)(param_3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar8 = FUN_05c6fd28(*(long *)(param_3 + 0x18),0);
    }
    puVar5 = Method_Pico_Platform_Task<SessionMedia>__ctor__;
    if (iVar8 == 2) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_057f8178(param_1,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8
                                    ) + 0x5c,1,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
      goto LAB_059b602c;
    }
    if (iVar8 == 4) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_057f8178(param_1,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8
                                    ) + 0x5c,0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,1,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
      goto LAB_059b602c;
    }
    if (iVar8 == 8) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_057f8178(param_1,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8
                                    ) + 0x5c,0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,1,0);
      goto LAB_059b602c;
    }
  }
  puVar5 = Method_Pico_Platform_Task<SessionMedia>__ctor__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_057f8178(param_1,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x5c,0,0);
  FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
  FUN_057f8178(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
LAB_059b602c:
  FUN_057f8178(param_1,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x130,cVar2 != '\0',0);
  if (*(char *)(param_2 + 0x36) == '\0') {
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar6 = FUN_05928658(*(long *)(param_2 + 0x20),param_3,0);
    uVar6 = uVar6 & 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(char *)(param_3 + 0xa8) == '\0') {
    if (DAT_066c1e91 == '\0') {
      FUN_02b3c81c(PTR_DAT_063132f8);
      DAT_066c1e91 = '\x01';
    }
    uVar15 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 8);
    local_84 = *(float *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 0xc);
  }
  else {
    FUN_05857484(auStack_a8,param_3,0);
    FUN_05857484(auStack_a8,param_3,0);
    uVar15 = local_88;
  }
  fVar3 = local_84;
  fVar4 = 0.0;
  if (uVar6 != 0) {
    fVar3 = -local_84;
    fVar4 = local_84;
  }
  if (*(char *)(param_2 + 0x36) != '\0') {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_057f7f2c(*(undefined4 *)(lVar11 + 300),*(undefined4 *)(lVar11 + 0x130),
                 *(undefined4 *)(lVar11 + 0x134),*(undefined4 *)(lVar11 + 0x138),param_1,0);
  }
  puVar5 = Method_System_Attribute_GetCustomAttributes__;
  lVar11 = *(long *)Method_System_Attribute_GetCustomAttributes__;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar11 = *(long *)puVar5;
  }
  uVar14 = **(undefined4 **)(lVar11 + 0xb8);
  uVar12 = FUN_05857530(param_3,0);
  if (lVar13 != 0) {
    thunk_FUN_05c5bc88(lVar13,uVar14,uVar12,0);
    uVar14 = 0x3f800000;
    if (cVar2 == '\0') {
      uVar14 = 0;
    }
    thunk_FUN_05c5b958(uVar14,lVar13,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_058654c8(uVar15,fVar3,0,fVar4,param_1,param_3,lVar13,0,0);
    FUN_05814cd4(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


