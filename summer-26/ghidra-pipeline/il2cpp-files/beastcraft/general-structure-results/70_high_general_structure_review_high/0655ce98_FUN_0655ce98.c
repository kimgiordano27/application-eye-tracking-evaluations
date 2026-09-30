/*
FUNCTION_NAME: FUN_0655ce98
ENTRY_POINT: 0655ce98
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0655d238) */
/* WARNING: Removing unreachable block (ram,0x0655d1b4) */
/* WARNING: Removing unreachable block (ram,0x0655d22c) */
/* WARNING: Removing unreachable block (ram,0x0655d1dc) */

void FUN_0655ce98(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_68 [16];
  long local_58;
  
  puVar2 = PTR_DAT_06a71a10;
  if ((bRam0000000006e9d2dd & 1) == 0) {
    FUN_02e3ca1c(System_Net_WebRequest_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a71a10);
    FUN_02e3ca1c(Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>_AddProperty<float>__)
    ;
    FUN_02e3ca1c(Lumpn_Discord_Field___TypeInfo);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__);
    FUN_02e3ca1c(PTR_DAT_06a5ee38);
    FUN_02e3ca1c(PTR_DAT_06a5ee40);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_CustomStyleProperty<int>__ctor__);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_CustomStyleProperty<int>_get_name__);
    FUN_02e3ca1c(PTR_DAT_06a5ee48);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_CustomStyleProperty<float>__ctor__);
    FUN_02e3ca1c(PTR_DAT_06a3a168);
    FUN_02e3ca1c(PTR_DAT_06a5ee50);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(Unity_Services_Authentication_WebRequest_TypeInfo);
    bRam0000000006e9d2dd = 1;
  }
  puVar3 = System_Net_WebRequest_TypeInfo;
  local_68._8_8_ = 0;
  local_58 = 0;
  local_70 = 0;
  local_68._0_8_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  local_68 = FUN_04b9a704(&local_58,*(undefined8 *)puVar3);
  local_b0 = local_68;
  local_b8 = 0;
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar11 = FUN_04d5fda8(*(long *)(param_1 + 0x90),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_03d4fa64(&local_d0,lVar11,
               *(undefined8 *)Method_UnityEngine_UIElements_CustomStyleProperty<float>__ctor__);
  puVar9 = Method_UnityEngine_UIElements_CustomStyleProperty<int>__ctor__;
  puVar8 = Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__;
  puVar7 = Lumpn_Discord_Field___TypeInfo;
  puVar6 = PTR_DAT_06a5ee50;
  puVar5 = PTR_DAT_06a5ee40;
  puVar4 = PTR_DAT_06a5ee38;
  puVar3 = PTR_DAT_06a3a168;
  puVar2 = PTR_DAT_06a2ed80;
  uStack_78 = puStack_c8;
  local_80 = local_d0;
  local_70 = local_c0;
  puStack_c8 = &local_80;
  local_d0 = 0;
  while( true ) {
    uVar12 = FUN_05040a54(&local_80,*(undefined8 *)puVar9);
    if ((uVar12 & 1) == 0) {
      FUN_05040a50(&local_80,*(undefined8 *)puVar8);
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_03ed9364(&local_d0,local_58,*(undefined8 *)puVar6);
      local_90 = local_c0;
      puStack_98 = puStack_c8;
      local_a0 = local_d0;
      local_d0 = 0;
      puStack_c8 = &local_a0;
      while (uVar12 = FUN_04fb5720(&local_a0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        bVar10 = FUN_04d61bdc(*(long *)(param_1 + 0x90),local_90 & 0xffffffff,&local_a8,
                              *(undefined8 *)puVar7);
        if ((bVar10 & local_a8 != 0) != 0) {
          uVar14 = *(undefined8 *)(local_a8 + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar12 = FUN_06267b6c(uVar14,0,0);
          if ((uVar12 & 1) != 0) {
            if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            if (*(char *)(local_a8 + 0x145) != '\0') {
              FUN_0655d344(param_1,local_a8,*(undefined8 *)(local_a8 + 0x50));
            }
          }
        }
      }
      FUN_04fb571c(&local_a0,*(undefined8 *)puVar4);
      System_Collections_ObjectModel_ReadOnlyCollection<IntPtr>__System_Collections_Generic_IList<T>_get_Item
                (local_b0,*(undefined8 *)Unity_Services_Authentication_WebRequest_TypeInfo);
      if (local_b8 == 0) {
        if (*(long *)(param_1 + 0x90) != 0) {
          FUN_04d60288(*(long *)(param_1 + 0x90),
                       *(undefined8 *)
                        Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>_AddProperty<float>__
                      );
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc();
    }
    if (local_58 == 0) break;
    lVar11 = *(long *)(local_58 + 0x10);
    lVar13 = *(long *)puVar3;
    *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(local_58 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(local_58 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_70;
    }
    else {
      FUN_03ed8990(local_58,local_70 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


