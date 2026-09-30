/*
FUNCTION_NAME: FUN_01350870
ENTRY_POINT: 01350870
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_01350870(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__;
  if ((DAT_03776710 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_EmitUtilities_CreateWeakInstancePropertyGetter__);
    thunk_FUN_00d48444(StringLiteral_11208);
    thunk_FUN_00d48444(PTR_DAT_033eb4c0);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIR_GradientSettingsAtlas_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_CompileLengthFacet__);
    thunk_FUN_00d48444(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceDiscoveryResultsData>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Matrix4x4[]>_Add__);
    thunk_FUN_00d48444(System_Collections_CaseInsensitiveComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13772);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                      );
    DAT_03776710 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    FUN_012dd38c(lVar5,*(undefined8 *)System_Collections_CaseInsensitiveComparer_TypeInfo);
    plVar8 = (long *)(param_1 + 0x20);
    lVar6 = *plVar8;
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    **(long **)(lVar6 + 0xb8) = lVar5;
    lVar5 = *plVar8;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    lVar5 = *plVar8;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    lVar5 = thunk_FUN_00d62348();
    if (lVar5 != 0) {
      lVar7 = *plVar8;
      uVar1 = *(ushort *)(lVar7 + 0x132);
      lVar6 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        uVar1 = *(ushort *)(*plVar8 + 0x132);
        lVar6 = *plVar8;
      }
      uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_00d5941c(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
      (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
      lVar6 = *plVar8;
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar5;
      lVar5 = *plVar8;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      puVar4 = Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_CompileLengthFacet__;
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar5 != 0) {
        FUN_01298da0(lVar5,*(undefined8 *)
                            Method_Sirenix_Utilities_EmitUtilities_CreateWeakInstancePropertyGetter__
                    );
        lVar6 = *plVar8;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 0x10) = lVar5;
        lVar5 = *plVar8;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        lVar5 = *plVar8;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        lVar5 = thunk_FUN_00d62348();
        if (lVar5 != 0) {
          lVar7 = *plVar8;
          uVar1 = *(ushort *)(lVar7 + 0x132);
          lVar6 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
            uVar1 = *(ushort *)(*plVar8 + 0x132);
            lVar6 = *plVar8;
          }
          uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_00d5941c(lVar6);
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
          (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
          lVar6 = *plVar8;
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          *(long *)(*(long *)(lVar6 + 0xb8) + 0x18) = lVar5;
          lVar5 = *plVar8;
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          lVar5 = *plVar8;
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          lVar5 = thunk_FUN_00d62348();
          if (lVar5 != 0) {
            lVar7 = *plVar8;
            uVar1 = *(ushort *)(lVar7 + 0x132);
            lVar6 = lVar7;
            if ((uVar1 & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
              uVar1 = *(ushort *)(*plVar8 + 0x132);
              lVar6 = *plVar8;
            }
            uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
            if ((uVar1 & 1) == 0) {
              lVar6 = FUN_00d5941c(lVar6);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
            (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
            lVar6 = *plVar8;
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            *(long *)(*(long *)(lVar6 + 0xb8) + 0x20) = lVar5;
            lVar5 = *plVar8;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            puVar4 = 
            Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceDiscoveryResultsData>__;
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar5 != 0) {
              FUN_01298da0(lVar5,*(undefined8 *)PTR_DAT_033eb4c0);
              lVar6 = *plVar8;
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_00d5941c();
              }
              *(long *)(*(long *)(lVar6 + 0xb8) + 0x28) = lVar5;
              lVar5 = *plVar8;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              lVar5 = *plVar8;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x40) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              lVar5 = thunk_FUN_00d62348();
              if (lVar5 != 0) {
                lVar7 = *plVar8;
                uVar1 = *(ushort *)(lVar7 + 0x132);
                lVar6 = lVar7;
                if ((uVar1 & 1) == 0) {
                  lVar7 = FUN_00d5941c(lVar7);
                  uVar1 = *(ushort *)(*plVar8 + 0x132);
                  lVar6 = *plVar8;
                }
                uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x48);
                if ((uVar1 & 1) == 0) {
                  lVar6 = FUN_00d5941c(lVar6);
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
                (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
                lVar6 = *plVar8;
                if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                  lVar6 = FUN_00d5941c();
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                  lVar6 = FUN_00d5941c();
                }
                *(long *)(*(long *)(lVar6 + 0xb8) + 0x30) = lVar5;
                lVar5 = *plVar8;
                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                  lVar5 = FUN_00d5941c();
                }
                if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                  FUN_00d5941c();
                }
                lVar5 = *plVar8;
                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                  lVar5 = FUN_00d5941c();
                }
                if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x132) & 1) == 0) {
                  FUN_00d5941c();
                }
                lVar5 = thunk_FUN_00d62348();
                if (lVar5 != 0) {
                  lVar7 = *plVar8;
                  uVar1 = *(ushort *)(lVar7 + 0x132);
                  lVar6 = lVar7;
                  if ((uVar1 & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                    uVar1 = *(ushort *)(*plVar8 + 0x132);
                    lVar6 = *plVar8;
                  }
                  uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x58);
                  if ((uVar1 & 1) == 0) {
                    lVar6 = FUN_00d5941c(lVar6);
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
                  (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
                  lVar6 = *plVar8;
                  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                    lVar6 = FUN_00d5941c();
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                    lVar6 = FUN_00d5941c();
                  }
                  *(long *)(*(long *)(lVar6 + 0xb8) + 0x38) = lVar5;
                  lVar5 = *plVar8;
                  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    lVar5 = FUN_00d5941c();
                  }
                  puVar4 = StringLiteral_13772;
                  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar3 = Method_System_Collections_Generic_List<Matrix4x4[]>_Add__;
                  if (lVar5 != 0) {
                    FUN_012dd38c(lVar5,*(undefined8 *)
                                        Method_System_Collections_Generic_List<Matrix4x4[]>_Add__);
                    lVar6 = *plVar8;
                    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                      lVar6 = FUN_00d5941c();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                      lVar6 = FUN_00d5941c();
                    }
                    *(long *)(*(long *)(lVar6 + 0xb8) + 0x40) = lVar5;
                    lVar5 = *plVar8;
                    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                      lVar5 = FUN_00d5941c();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                      FUN_00d5941c();
                    }
                    lVar5 = *plVar8;
                    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                      lVar5 = FUN_00d5941c();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x60) + 0x132) & 1) == 0) {
                      FUN_00d5941c();
                    }
                    lVar5 = thunk_FUN_00d62348();
                    if (lVar5 != 0) {
                      lVar7 = *plVar8;
                      uVar1 = *(ushort *)(lVar7 + 0x132);
                      lVar6 = lVar7;
                      if ((uVar1 & 1) == 0) {
                        lVar7 = FUN_00d5941c(lVar7);
                        uVar1 = *(ushort *)(*plVar8 + 0x132);
                        lVar6 = *plVar8;
                      }
                      uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x68);
                      if ((uVar1 & 1) == 0) {
                        lVar6 = FUN_00d5941c(lVar6);
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x68);
                      (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,0,0);
                      lVar6 = *plVar8;
                      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                        lVar6 = FUN_00d5941c();
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                        lVar6 = FUN_00d5941c();
                      }
                      *(long *)(*(long *)(lVar6 + 0xb8) + 0x48) = lVar5;
                      lVar5 = *plVar8;
                      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                        lVar5 = FUN_00d5941c();
                      }
                      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                        FUN_00d5941c();
                      }
                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                      if (lVar5 != 0) {
                        FUN_012dd38c(lVar5,*(undefined8 *)puVar3);
                        lVar6 = *plVar8;
                        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                          lVar6 = FUN_00d5941c();
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                          lVar6 = FUN_00d5941c();
                        }
                        *(long *)(*(long *)(lVar6 + 0xb8) + 0x50) = lVar5;
                        lVar5 = *plVar8;
                        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                          lVar5 = FUN_00d5941c();
                        }
                        puVar2 = UnityEngine_UIElements_UIR_GradientSettingsAtlas_TypeInfo;
                        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0) {
                          FUN_00d5941c();
                        }
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if (lVar5 != 0) {
                          FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_11208);
                          lVar6 = *plVar8;
                          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                            lVar6 = FUN_00d5941c();
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                            lVar6 = FUN_00d5941c();
                          }
                          *(long *)(*(long *)(lVar6 + 0xb8) + 0x58) = lVar5;
                          lVar5 = *plVar8;
                          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                            lVar5 = FUN_00d5941c();
                          }
                          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0)
                          {
                            FUN_00d5941c();
                          }
                          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                          if (lVar5 != 0) {
                            FUN_012dd38c(lVar5,*(undefined8 *)puVar3);
                            lVar6 = *plVar8;
                            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                              lVar6 = FUN_00d5941c();
                            }
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                              lVar6 = FUN_00d5941c();
                            }
                            *(long *)(*(long *)(lVar6 + 0xb8) + 0x60) = lVar5;
                            lVar5 = *plVar8;
                            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                              lVar5 = FUN_00d5941c();
                            }
                            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) == 0
                               ) {
                              FUN_00d5941c();
                            }
                            lVar5 = *plVar8;
                            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                              lVar5 = FUN_00d5941c();
                            }
                            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
                            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                              lVar5 = FUN_00d5941c();
                            }
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            lVar5 = *plVar8;
                            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                              lVar5 = FUN_00d5941c();
                            }
                            puVar4 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
                            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
                            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                              lVar5 = FUN_00d5941c();
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                            if (lVar5 != 0) {
                              lVar6 = *plVar8;
                              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                lVar6 = FUN_00d5941c();
                              }
                              FUN_016f27fc(lVar5,uVar9,
                                           *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x80),0);
                              lVar6 = *plVar8;
                              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                lVar6 = FUN_00d5941c();
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                lVar6 = FUN_00d5941c();
                              }
                              *(long *)(*(long *)(lVar6 + 0xb8) + 0x68) = lVar5;
                              lVar5 = *plVar8;
                              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                                lVar5 = FUN_00d5941c();
                              }
                              if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1) ==
                                  0) {
                                FUN_00d5941c();
                              }
                              lVar5 = *plVar8;
                              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                                lVar5 = FUN_00d5941c();
                              }
                              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x78);
                              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                                lVar5 = FUN_00d5941c();
                              }
                              lVar6 = *plVar8;
                              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                lVar6 = FUN_00d5941c(lVar6);
                              }
                              if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x90) + 0x132) & 1)
                                  == 0) {
                                FUN_00d5941c();
                              }
                              lVar5 = thunk_FUN_00d62348();
                              if (lVar5 != 0) {
                                lVar7 = *plVar8;
                                uVar1 = *(ushort *)(lVar7 + 0x132);
                                lVar6 = lVar7;
                                if ((uVar1 & 1) == 0) {
                                  lVar7 = FUN_00d5941c(lVar7);
                                  uVar1 = *(ushort *)(*plVar8 + 0x132);
                                  lVar6 = *plVar8;
                                }
                                uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x98);
                                lVar7 = lVar6;
                                if ((uVar1 & 1) == 0) {
                                  lVar6 = FUN_00d5941c(lVar6);
                                  uVar1 = *(ushort *)(*plVar8 + 0x132);
                                  lVar7 = *plVar8;
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x98);
                                if ((uVar1 & 1) == 0) {
                                  lVar7 = FUN_00d5941c(lVar7);
                                }
                                local_40 = &local_38;
                                local_38 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x88);
                                local_48 = uVar9;
                                (**(code **)(lVar6 + 0x10))(uVar10,lVar6,lVar5,&local_48,&local_38);
                                lVar6 = *plVar8;
                                if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                  lVar6 = FUN_00d5941c();
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                                if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                                  lVar6 = FUN_00d5941c();
                                }
                                *(long *)(*(long *)(lVar6 + 0xb8) + 0x70) = lVar5;
                                lVar5 = *plVar8;
                                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                                  lVar5 = FUN_00d5941c();
                                }
                                if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x132) & 1)
                                    == 0) {
                                  FUN_00d5941c();
                                }
                                lVar6 = *plVar8;
                                uVar1 = *(ushort *)(lVar6 + 0x132);
                                lVar5 = lVar6;
                                if ((uVar1 & 1) == 0) {
                                  lVar6 = FUN_00d5941c(lVar6);
                                  uVar1 = *(ushort *)(*plVar8 + 0x132);
                                  lVar5 = *plVar8;
                                }
                                uVar9 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xa0);
                                if ((uVar1 & 1) == 0) {
                                  lVar5 = FUN_00d5941c(lVar5);
                                }
                                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xa0);
                                (**(code **)(lVar5 + 0x10))(uVar9,lVar5,0,0,0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


