/*
FUNCTION_NAME: FUN_023d0e04
ENTRY_POINT: 023d0e04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023d1208) */
/* WARNING: Removing unreachable block (ram,0x023d1374) */

void FUN_023d0e04(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5,long param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  
  if ((DAT_037820c9 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var);
    thunk_FUN_00d48444(StringLiteral_12852);
    thunk_FUN_00d48444(System_Collections_ListDictionaryInternal_NodeEnumerator_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo);
    thunk_FUN_00d48444(System_Func<byte>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ebb80);
    thunk_FUN_00d48444(Autohand_CollisionEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_OrderBy<MedleyGraveyardStatueSpawnerGroup,_Guid>__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<Rect>_get_HasValue__);
    thunk_FUN_00d48444(StringLiteral_7118);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitWebSocketClient_PubSubSubscription>_set_Item__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037820c9 = 1;
  }
  local_98 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  uVar8 = FUN_023d0d7c(param_4,param_5);
  puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar8 & 1) != 0) {
    FUN_023d09b8(uVar8,param_5);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_0268b4e0(param_6,0,0);
    puVar7 = StringLiteral_12852;
    if ((uVar8 & 1) == 0) {
      if (param_6 == 0) goto LAB_023d1384;
      uVar18 = FUN_0269f578(param_6,0);
      lVar9 = FUN_023d1454(param_4,param_7);
      local_98 = 0;
      FUN_010c3738(param_6,&local_98,*(undefined8 *)puVar7);
      puVar2 = (undefined8 *)PTR_DAT_033ebb80;
      puVar3 = (undefined8 *)System_Func<byte>_TypeInfo;
      puVar4 = (undefined8 *)Autohand_CollisionEvent_TypeInfo;
      puVar5 = (undefined8 *)
               Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
      ;
    }
    else {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar14 = *(uint **)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
      uVar18 = (ulong)*puVar14;
      param_2 = (float)puVar14[1];
      param_3 = (float)puVar14[2];
      lVar9 = FUN_023d1454(param_4,param_7);
      local_98 = 0;
      puVar2 = (undefined8 *)PTR_DAT_033ebb80;
      puVar3 = (undefined8 *)System_Func<byte>_TypeInfo;
      puVar4 = (undefined8 *)Autohand_CollisionEvent_TypeInfo;
      puVar5 = (undefined8 *)
               Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
      ;
    }
    PTR_DAT_033ebb80 = (undefined *)puVar2;
    System_Func<byte>_TypeInfo = (undefined *)puVar3;
    Autohand_CollisionEvent_TypeInfo = (undefined *)puVar4;
    Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
         = (undefined *)puVar5;
    if (lVar9 == 0) {
LAB_023d1384:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar9,&local_f8,*(undefined8 *)StringLiteral_7118);
    fVar19 = 1.0;
    uStack_b8 = uStack_f0;
    local_c0 = local_f8;
    local_b0 = local_e8;
    while (uVar10 = FUN_012b894c(&local_c0,*puVar3), (uVar10 & 1) != 0) {
      lVar9 = FUN_00addcdc(&local_c0,*puVar4);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0268b4e0(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_02689f60(lVar9,0);
        if ((uVar10 & 1) != 0) {
          uVar11 = FUN_023cdfe0(lVar9);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_0268b4e0(uVar11,0,0);
          if (((uVar10 & 1) == 0) && (0.0 < *(float *)(lVar9 + 0x24))) {
            if (*(char *)(lVar9 + 0x18) == '\0') {
              if ((uVar8 & 1) == 0) {
                lVar12 = *(long *)(param_4 + 0x40);
                FUN_010c3384(lVar9,lVar12,
                             *(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar12 + 0x18) != 0) {
                  FUN_01323390(lVar12,&local_f8,
                               *(undefined8 *)Method_System_Nullable<Rect>_get_HasValue__);
                  uStack_d8 = uStack_f0;
                  local_e0 = local_f8;
                  local_d0 = local_e8;
                  fVar17 = INFINITY;
                  while (uVar10 = FUN_012b894c(&local_e0,*puVar2), (uVar10 & 1) != 0) {
                    lVar13 = FUN_00ac5198(&local_e0,*puVar5);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar10 = FUN_026f2c34(lVar13,0);
                    if ((uVar10 & 1) != 0) {
                      fVar15 = param_2;
                      fVar20 = param_3;
                      fVar16 = (float)FUN_026f2d70(uVar18,lVar13,0);
                      fVar16 = fVar16 - (float)uVar18;
                      fVar15 = (fVar20 - param_3) * (fVar20 - param_3) +
                               fVar16 * fVar16 + (fVar15 - param_2) * (fVar15 - param_2);
                      if (fVar15 < fVar17) {
                        fVar17 = fVar15;
                      }
                    }
                  }
                  FUN_012b8948(&local_e0,
                               *(undefined8 *)
                                OVR_OpenVR_IVRCompositor__LockGLSharedTextureForAccess_TypeInfo);
                  lVar13 = *(long *)
                            Method_System_Linq_Enumerable_OrderBy<MedleyGraveyardStatueSpawnerGroup,_Guid>__
                  ;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  uVar10 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
                  if ((uVar10 & 1) == 0) {
                    *(undefined4 *)(lVar12 + 0x18) = 0;
                  }
                  else {
                    iVar1 = *(int *)(lVar12 + 0x18);
                    *(undefined4 *)(lVar12 + 0x18) = 0;
                    if (0 < iVar1) {
                      FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                    }
                  }
                  fVar15 = *(float *)(lVar9 + 0x20) * *(float *)(lVar9 + 0x20);
                  if (fVar17 <= fVar15) {
                    fVar20 = fVar19;
                    if (0.0 < fVar15) {
                      fVar20 = 1.0 - fVar17 / fVar15;
                    }
                    lVar12 = FUN_023cdfe0(lVar9);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    fVar15 = *(float *)(lVar9 + 0x24);
                    fVar17 = fVar15;
                    if (1.0 < fVar15) {
                      fVar17 = fVar19;
                    }
                    if (fVar15 < 0.0) {
                      fVar17 = 0.0;
                    }
                    FUN_023d07f4(fVar20 * fVar17,lVar12,param_5,*(undefined8 *)(lVar12 + 0x18));
                  }
                }
              }
            }
            else {
              lVar12 = FUN_023cdfe0(lVar9);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar15 = *(float *)(lVar9 + 0x24);
              fVar17 = fVar15;
              if (1.0 < fVar15) {
                fVar17 = fVar19;
              }
              if (fVar15 < 0.0) {
                fVar17 = 0.0;
              }
              FUN_023d07f4(fVar17,lVar12,param_5,*(undefined8 *)(lVar12 + 0x18));
            }
          }
        }
      }
    }
    FUN_012b8948(&local_c0,
                 *(undefined8 *)System_Collections_ListDictionaryInternal_NodeEnumerator_TypeInfo);
  }
  return;
}


