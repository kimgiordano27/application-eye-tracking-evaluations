/*
FUNCTION_NAME: FUN_06190880
ENTRY_POINT: 06190880
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06190880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_06767628;
  if ((DAT_06b8adee & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767628);
    FUN_02d6084c(PTR_DAT_06767d10);
    FUN_02d6084c(Method_System_Net_Configuration_NetSectionGroup__ctor__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream__ctor__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_BeginRead__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_BeginWrite__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_EndRead__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_EndWrite__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_Read__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_Read__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_ReadAsync__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_Seek__);
    FUN_02d6084c(Method_System_Net_Sockets_NetworkStream_SetLength__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_RuntimeReferenceImageLibrary_get_Item__);
    FUN_02d6084c(Method_System_Resources_RuntimeResourceSet_GetEnumeratorHelper__);
    FUN_02d6084c(Method_System_Resources_RuntimeResourceSet_GetObject__);
    FUN_02d6084c(Method_System_RuntimeType__ctor__);
    FUN_02d6084c(Method_System_RuntimeType_CheckValue__);
    FUN_02d6084c(Method_System_RuntimeType_CreateInstanceCheckThis__);
    FUN_02d6084c(Method_System_RuntimeType_CreateInstanceDefaultCtor__);
    FUN_02d6084c(Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_02d6084c(Method_System_RuntimeType_CreateInstanceMono__);
    FUN_02d6084c(Method_System_RuntimeType_GetArrayRank__);
    FUN_02d6084c(Method_System_RuntimeType_GetCachedName__);
    FUN_02d6084c(Method_System_RuntimeType_GetCustomAttributes__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__
                );
    DAT_06b8adee = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__;
  puVar1 = PTR_DAT_0675e258;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_0675e258 + 0x88);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_06767d10;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x440);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Net_Sockets_NetworkStream_BeginRead__)
      ;
      FUN_043620ac(lVar8,uVar9,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_RuntimeReferenceImageLibrary_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x440) = lVar8;
      thunk_FUN_02dd37b4(lVar5 + 0x440,lVar8);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x88);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x448);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Net_Sockets_NetworkStream_BeginWrite__);
        FUN_04362608(lVar8,uVar9,*(undefined8 *)Method_System_RuntimeType__ctor__,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x448) = lVar8;
        thunk_FUN_02dd37b4(lVar5 + 0x448,lVar8);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x88);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x450);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_System_Net_Sockets_NetworkStream_EndWrite__);
          FUN_043622f8(lVar8,uVar9,*(undefined8 *)Method_System_RuntimeType_CheckValue__,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x450) = lVar8;
          thunk_FUN_02dd37b4(lVar5 + 0x450,lVar8);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x88);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x458);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_System_Net_Sockets_NetworkStream_EndRead__);
            FUN_043623bc(lVar8,uVar9,
                         *(undefined8 *)Method_System_RuntimeType_CreateInstanceCheckThis__,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x458) = lVar8;
            thunk_FUN_02dd37b4(lVar5 + 0x458,lVar8);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x88);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
            uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x460);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_System_Net_Sockets_NetworkStream_Close__);
              FUN_04362480(lVar8,uVar9,
                           *(undefined8 *)Method_System_RuntimeType_CreateInstanceDefaultCtor__,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x460) = lVar8;
              thunk_FUN_02dd37b4(lVar5 + 0x460,lVar8);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x88);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
              uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x468);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_System_Net_Sockets_NetworkStream_SetLength__);
                FUN_04362170(lVar8,uVar9,
                             *(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x468) = lVar8;
                thunk_FUN_02dd37b4(lVar5 + 0x468,lVar8);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x88);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x470);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_System_Net_Sockets_NetworkStream_Read__);
                  FUN_04362790(lVar8,uVar9,
                               *(undefined8 *)Method_System_RuntimeType_CreateInstanceMono__,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x470) = lVar8;
                  thunk_FUN_02dd37b4(lVar5 + 0x470,lVar8);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x88);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                  uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x478);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_System_Net_Sockets_NetworkStream_ReadAsync__)
                    ;
                    FUN_04362854(lVar8,uVar9,*(undefined8 *)Method_System_RuntimeType_GetArrayRank__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x478) = lVar8;
                    thunk_FUN_02dd37b4(lVar5 + 0x478,lVar8);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x88);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x480);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_System_Net_Sockets_NetworkStream__ctor__);
                      FUN_04362918(lVar8,uVar9,
                                   *(undefined8 *)Method_System_RuntimeType_GetCachedName__,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x480) = lVar8;
                      thunk_FUN_02dd37b4(lVar5 + 0x480,lVar8);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x88);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x488);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                    Method_System_Net_Sockets_NetworkStream_Seek__);
                        FUN_043626cc(lVar8,uVar9,
                                     *(undefined8 *)Method_System_RuntimeType_GetCustomAttributes__,
                                     0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x488) = lVar8;
                        thunk_FUN_02dd37b4(lVar5 + 0x488,lVar8);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x88);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x490);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                      Method_System_Net_Sockets_NetworkStream_Read__
                                                    );
                          FUN_04362234(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_System_Resources_RuntimeResourceSet_GetEnumeratorHelper__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x490) = lVar8;
                          thunk_FUN_02dd37b4(lVar5 + 0x490,lVar8);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x498);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_System_Net_Configuration_NetSectionGroup__ctor__
                                                  );
                            FUN_0439b2c0(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_System_Resources_RuntimeResourceSet_GetObject__,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x498) = lVar8;
                            thunk_FUN_02dd37b4(lVar5 + 0x498,lVar8);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


