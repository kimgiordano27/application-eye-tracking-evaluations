/*
FUNCTION_NAME: FUN_0321d78c
ENTRY_POINT: 0321d78c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0321d78c(long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined4 local_94;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  puVar9 = PTR_DAT_03d83968;
  puVar8 = PTR_DAT_03d83960;
  puVar7 = PTR_DAT_03d83958;
  puVar6 = PTR_DAT_03d83950;
  puVar5 = PTR_DAT_03d83948;
  puVar4 = PTR_DAT_03d83940;
  puVar3 = Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__;
  if ((DAT_03ff4649 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83948);
    thunk_FUN_01ad9084(PTR_DAT_03d83968);
    thunk_FUN_01ad9084(PTR_DAT_03d83958);
    thunk_FUN_01ad9084(PTR_DAT_03d83970);
    thunk_FUN_01ad9084(PTR_DAT_03d83940);
    thunk_FUN_01ad9084(PTR_DAT_03d83950);
    thunk_FUN_01ad9084(PTR_DAT_03d83960);
    thunk_FUN_01ad9084(PTR_DAT_03d83978);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    thunk_FUN_01ad9084(
                      Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d83980);
    thunk_FUN_01ad9084(PTR_DAT_03d83988);
    thunk_FUN_01ad9084(PTR_DAT_03d83990);
    thunk_FUN_01ad9084(PTR_DAT_03d83998);
    thunk_FUN_01ad9084(PTR_DAT_03d839a0);
    DAT_03ff4649 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_94 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70[0] = 0;
  lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02b591b0(lVar11,*(undefined8 *)puVar3);
  plVar16 = (long *)(param_2 + 0x38);
  *plVar16 = lVar11;
  thunk_FUN_01b4f09c(plVar16,lVar11);
  lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
  FUN_02580980(lVar11,*(undefined8 *)puVar5);
  plVar17 = (long *)(param_2 + 0x40);
  *plVar17 = lVar11;
  thunk_FUN_01b4f09c(plVar17,lVar11);
  lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar6);
  FUN_0255a44c(lVar11,*(undefined8 *)puVar7);
  plVar18 = (long *)(param_2 + 0x48);
  *plVar18 = lVar11;
  thunk_FUN_01b4f09c(plVar18,lVar11);
  lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar8);
  FUN_0255a44c(lVar11,*(undefined8 *)puVar9);
  plVar19 = (long *)(param_2 + 0x50);
  *plVar19 = lVar11;
  uVar12 = thunk_FUN_01b4f09c(plVar19,lVar11);
  uVar13 = FUN_0321de84(uVar12,*(undefined8 *)(param_2 + 0x18));
  if ((uVar13 & 1) != 0) {
    lVar11 = FUN_0321e050(param_2,*(undefined8 *)(param_2 + 0x18),0x4e4f534a);
    uVar12 = 0;
    if (lVar11 != 0) {
      plVar14 = (long *)FUN_02f00204(0);
      if (plVar14 == (long *)0x0) goto LAB_0321ddf8;
      uVar12 = (**(code **)(*plVar14 + 0x348))(plVar14,lVar11,*(undefined8 *)(*plVar14 + 0x350));
      uVar12 = thunk_FUN_032bbb00(uVar12,0);
      *(undefined8 *)(param_2 + 0x10) = uVar12;
      uVar12 = thunk_FUN_01b4f09c();
    }
    local_94 = 0;
    uVar13 = FUN_0321e0fc(uVar12,*(undefined8 *)(param_2 + 0x18),0x4e4942,&local_94);
    if (((uVar13 & 1) != 0) &&
       (uVar13 = FUN_032bc29c(*(undefined8 *)(param_2 + 0x10),0,0), (uVar13 & 1) != 0)) {
      plVar14 = *(long **)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x28) = local_94;
      if (plVar14 == (long *)0x0) goto LAB_0321ddf8;
      uVar12 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200));
      *(undefined8 *)(param_2 + 0x30) = uVar12;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
      thunk_FUN_01b4f09c();
      puVar20 = (undefined8 *)(param_2 + 0x58);
      uVar12 = *puVar20;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar13 = FUN_03922f24(uVar12,0,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03d83990,0);
        uVar12 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d839a0,0);
        *puVar20 = uVar12;
        thunk_FUN_01b4f09c(puVar20,uVar12);
      }
      puVar20 = (undefined8 *)(param_2 + 0x60);
      uVar12 = *puVar20;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar13 = FUN_03922f24(uVar12,0,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03d83980,0);
        uVar12 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d83998,0);
        *puVar20 = uVar12;
        thunk_FUN_01b4f09c(puVar20,uVar12);
      }
      iVar10 = FUN_0321e220(param_2,param_3 & 1,param_4 & 1);
      if (iVar10 < 0) {
        plVar16 = *(long **)(param_2 + 0x18);
        if (plVar16 == (long *)0x0) goto LAB_0321ddf8;
        (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
        goto LAB_0321dd9c;
      }
    }
  }
  puVar3 = PTR_DAT_03d83988;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  plVar14 = *(long **)(param_2 + 0x18);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    lStack_88 = *plVar16;
    thunk_FUN_01b4f09c((ulong)&local_90 | 8);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0391fe00(lVar11,*(undefined8 *)puVar3,0);
    local_90 = lVar11;
    thunk_FUN_01b4f09c(&local_90,lVar11);
    local_80 = *plVar17;
    thunk_FUN_01b4f09c(&local_80);
    local_78 = *plVar18;
    thunk_FUN_01b4f09c(&local_78);
    puVar2 = PTR_DAT_03d83978;
    if (*plVar19 != 0) {
      uVar12 = FUN_0255ab50(*plVar19,*(undefined8 *)PTR_DAT_03d83970);
      local_70[0] = FUN_01ec6884(uVar12,*(undefined8 *)puVar2);
      thunk_FUN_01b4f09c(local_70);
      puVar3 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
      puVar2 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__;
      if (*plVar16 != 0) {
        FUN_02b5a400(&local_c8,*plVar16,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
        uStack_a8 = uStack_c0;
        local_b0 = local_c8;
        local_a0 = local_b8;
        while (uVar13 = FUN_02739b98(&local_b0,*(undefined8 *)puVar3), lVar11 = local_a0,
              (uVar13 & 1) != 0) {
          if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar15 = FUN_0391fab4(local_a0,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar12 = FUN_03928c2c(lVar15,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar13 = FUN_03922f24(uVar12,0,0);
          if ((uVar13 & 1) != 0) {
            lVar11 = FUN_0391fab4(lVar11,0);
            if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar12 = FUN_0391fab4(local_90,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178(uVar12,uVar12);
            }
            FUN_03929618(lVar11,uVar12,0);
          }
        }
        FUN_02739b94(&local_b0,*(undefined8 *)puVar2);
        if (local_90 != 0) {
          lVar11 = FUN_0391fab4(local_90,0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          if (lVar11 != 0) {
            lVar15 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_03929e90(*(undefined4 *)(lVar15 + 0x18),*(undefined4 *)(lVar15 + 0x1c),
                         *(undefined4 *)(lVar15 + 0x20),0x43340000,lVar11,0);
LAB_0321dd9c:
            param_1[4] = local_70[0];
            param_1[1] = lStack_88;
            *param_1 = local_90;
            param_1[3] = local_78;
            param_1[2] = local_80;
            return;
          }
        }
      }
    }
  }
LAB_0321ddf8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


