/*
FUNCTION_NAME: Unity.Services.Lobbies.Models.JoinByCodeRequest$$.ctor
ENTRY_POINT: 07800934
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Lobbies_Models_JoinByCodeRequest___ctor(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_089872ff & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<Vector3,_int>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ad1b8);
    FUN_03a8a718(PTR_DAT_084acef0);
    FUN_03a8a718(System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TypeInfo)
    ;
    FUN_03a8a718(System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_uint>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_ISerializer>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_VolumeComponent>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_ISubsystem>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_int>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_XmlQualifiedName>_TypeInfo);
    DAT_089872ff = 1;
  }
  puVar2 = PTR_DAT_084acef0;
  lVar10 = *(long *)(param_1 + 8);
  local_40 = 0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_40 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_07800c0c;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 0x10) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_07800abc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)
                                  System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo
                          ,4);
LAB_07800abc:
    lVar5 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar5,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_XmlQualifiedName>_TypeInfo
                           );
    uVar6 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<Type,_VolumeComponent>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      thunk_FUN_03afed3c(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffcb08(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)System_Collections_Generic_Dictionary<Vector3,_int>_TypeInfo);
      return;
    }
  }
  lVar5 = FUN_0587c704(&local_38,
                       *(undefined8 *)System_Collections_Generic_Dictionary<Type,_uint>_TypeInfo);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar8 = *(long **)(*(long *)(lVar10 + 0x10) + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar10 = *plVar8;
  uVar9 = *(undefined8 *)(lVar5 + 0x20);
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 8) * 0x10 + 0x138);
        goto LAB_07800bcc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_03ac43c4(plVar8,*(long *)
                                System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo,
                        8);
LAB_07800bcc:
  lVar10 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_40 = FUN_058b71ec(lVar10,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<Type,_int>_TypeInfo);
  uVar6 = FUN_0587c6c4(&local_40,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<Type,_ISubsystem>_TypeInfo);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xc) = local_40;
    thunk_FUN_03afed3c(param_1 + 0xc,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ffcb08(param_1 + 2,&local_40,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_TypeInfo
                );
    return;
  }
LAB_07800c0c:
  lVar10 = FUN_0587c704(&local_40,
                        *(undefined8 *)
                         System_Collections_Generic_Dictionary<Type,_ISerializer>_TypeInfo);
  puVar3 = PTR_DAT_084ad1b8;
  if (lVar10 != 0) {
    lVar5 = *(long *)puVar2;
    uVar9 = *(undefined8 *)(lVar10 + 0x20);
    iVar1 = *(int *)(lVar5 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar5);
    }
    FUN_05338ae8(param_1 + 2,uVar9,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


