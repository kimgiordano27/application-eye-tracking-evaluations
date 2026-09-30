/*
FUNCTION_NAME: OVRSpatialAnchor.<LoadUnboundSharedAnchorsAsync>d__64$$SetStateMachine
ENTRY_POINT: 056cc32c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_17;telemetry_or_network_hits_21;functionality_data_collection_or_telemetry_hits_21
*/


long OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64__SetStateMachine(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_02d965b8();
  FUN_02d965b8(Unity_Properties_TypeConverter<bool,_ulong>_TypeInfo);
                    /* try { // try from 056cc340 to 057cc407 has its CatchHandler @ 056cc340
                       catch() { ... } // from try @ 056cc340 with catch @ 056cc340
                       catch() { ... } // from try @ 056cc460 with catch @ 056cc340
                       catch() { ... } // from try @ 056cc504 with catch @ 056cc340
                       catch() { ... } // from try @ 056cc54c with catch @ 056cc340 */
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_bool>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_char>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_double>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_short>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_int>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_long>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_object>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_sbyte>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_float>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_string>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_ushort>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_uint>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<byte,_ulong>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_bool>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_byte>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_double>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_short>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_int>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_long>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_object>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_sbyte>_TypeInfo);
  FUN_02d965b8(Unity_Properties_TypeConverter<char,_float>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x911) = 1;
  lVar2 = FUN_05533924(&stack0x00000018,0);
  uVar3 = in_stack_00000018;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)
                Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_Func<object[],_object>>_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_056c3074(uVar3);
  uVar3 = in_stack_00000018;
  if (uVar1 < 0x43264357) {
    if (uVar1 < 0x1fbb72da) {
      if (uVar1 < 0xeb4040e) {
        if (uVar1 < 0x6a85abf) {
          if (uVar1 < 0x3e76232) {
            if (uVar1 < 0x2d32f61) {
              if (uVar1 == 0xe38aef) {
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                            Unity_Properties_TypeConverter<byte,_ulong>_TypeInfo);
                FUN_056cead4(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x2d32f60) {
LAB_056cd4ac:
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Vector3,_float>_TypeInfo);
                FUN_056cdcbc(lVar2,uVar3);
                return lVar2;
              }
            }
            else {
              if (uVar1 == 0x3d3458d) {
LAB_056ccfa4:
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                            System_Net_Http_Headers_TryParseListDelegate<TransferCodingWithQualityHeaderValue>_TypeInfo
                                          );
                FUN_056cda54(lVar2,uVar3);
                return lVar2;
              }
              if (uVar1 == 0x3e76231) goto LAB_056cd61c;
            }
            goto LAB_056cd524;
          }
          if (uVar1 < 0x4e5cf63) {
            if (uVar1 == 0x4b34ca3) goto OVRTelemetry__AddPlayModeOrigin;
            if (uVar1 == 0x4e5cf62) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<byte,_short>_TypeInfo);
              FUN_056ce814(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_056cd524;
          }
          if (uVar1 == 0x4f8c0f2) {
LAB_056cd718:
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Guid,_string>_TypeInfo);
            FUN_056cdc0c(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x5f1e153) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Pose,_float,_float>_TypeInfo);
            FUN_056cdecc(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x6a85abe;
        }
        else {
          if (uVar1 < 0x8891a80) {
            if (uVar1 < 0x80ad3c8) {
              if (uVar1 == 0x73484ca) {
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                            Unity_Properties_TypeConverter<bool,_uint>_TypeInfo);
                FUN_056ce65c(lVar2,uVar3);
                return lVar2;
              }
              uVar4 = 0x80ad3c7;
              goto LAB_056cc7bc;
            }
            if (uVar1 == 0x8260ab1) goto LAB_056cd718;
            uVar4 = 0x8891a7f;
            goto LAB_056ccf5c;
          }
          if (0x9956693 < uVar1) {
            if (uVar1 == 0xdcbd364) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<byte,_uint>_TypeInfo);
              FUN_056cea7c(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0xdf93113) {
LAB_056cd6d0:
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Meta_XR_ImmersiveDebugger_Manager_Tweak<int>_TypeInfo);
              FUN_056ce134(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0xeb4040d;
            goto OVRTelemetry_QPLTelemetryClient___ctor;
          }
          if (uVar1 == 0x904b598) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<bool,_double>_TypeInfo);
            FUN_056ce344(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x9956693;
        }
        goto FUN_056cd2ac;
      }
      if (uVar1 < 0x152663b2) {
        if (0x117fc8fe < uVar1) {
          if (uVar1 < 0x14806b86) {
            if (uVar1 == 0x121ab45f) goto LAB_056cd5b0;
            if (uVar1 == 0x14806b85) goto LAB_056cd5d4;
          }
          else {
            if (uVar1 == 0x14a22a97) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<bool,_int>_TypeInfo);
              FUN_056ce3f4(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x14aa2129) {
LAB_056cd61c:
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo
                                        );
              FUN_056cdb04(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x152663b1) {
LAB_056cd640:
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Net_Http_Headers_TryParseListDelegate<ViaHeaderValue>_TypeInfo
                                        );
              FUN_056cdaac(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_056cd524;
        }
        if (0x11449fc5 < uVar1) {
          if (uVar1 == 0x1175be60) goto LAB_056cd234;
          uVar4 = 0x117fc8fe;
LAB_056cce9c:
          if (uVar1 == uVar4) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<bool,_long>_TypeInfo);
            FUN_056ce4fc(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0xf9ecf9f) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<bool,_byte>_TypeInfo);
          FUN_056ce294(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x11449fc5;
LAB_056ccc34:
        if (uVar1 == uVar4) {
LAB_056ccd94:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>_TypeInfo)
          ;
          FUN_056cde1c(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (uVar1 < 0x1ad307b5) {
        if (0x18378bef < uVar1) {
          if (uVar1 == 0x186b58b1) goto LAB_056cd500;
          if (uVar1 == 0x18f0b01b) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<byte,_bool>_TypeInfo);
            FUN_056ce70c(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x1ad307b4;
LAB_056cd3ac:
          if (uVar1 == uVar4) {
LAB_056cd3b4:
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<byte,_int>_TypeInfo);
            FUN_056cedec(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0x1577036f) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<byte,_string>_TypeInfo);
          FUN_056ce9cc(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x18378bef;
        goto LAB_056cd42c;
      }
      if (uVar1 < 0x1d118ab3) {
        if (uVar1 == 0x1bd94aaf) {
OVRTelemetry_TelemetryClient__MarkerAnnotation:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<byte,_long>_TypeInfo);
          FUN_056ce86c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x1d118ab2) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<byte,_double>_TypeInfo);
          FUN_056ce7bc(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (uVar1 == 0x1d403932) {
LAB_056cd760:
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Pose,_float,_float,_float>_TypeInfo);
        FUN_056ce084(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x1f90f0d5) goto LAB_056cd4ac;
      uVar4 = 0x1fbb72d9;
    }
    else if (uVar1 < 0x2fdd0cce) {
      if (uVar1 < 0x264885cb) {
        if (uVar1 < 0x22810484) {
          if (uVar1 < 0x21cbe0c1) {
            if (uVar1 == 0x21248069) {
LAB_056cd234:
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<int,_int,_int,_bool>_TypeInfo);
              FUN_056cdf7c(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x21cbe0c0) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<char,_double>_TypeInfo);
              FUN_056cec34(lVar2,uVar3);
              return lVar2;
            }
          }
          else {
            if (uVar1 == 0x2247596e) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<bool,_string>_TypeInfo);
              FUN_056ce5ac(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x22810483) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<char,_long>_TypeInfo);
              FUN_056ced3c(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_056cd524;
        }
        if (uVar1 < 0x2309f39a) {
          if (uVar1 == 0x22933297) goto LAB_056cd500;
          if (uVar1 == 0x2309f399) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<char,_short>_TypeInfo);
            FUN_056cece4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0x234bc3f1) {
LAB_056cd5f8:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<char,_int>_TypeInfo);
          FUN_056cec8c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x24472f6c) goto OVRTelemetry__AddPlayModeOrigin;
        uVar4 = 0x264885ca;
      }
      else {
        if (0x2a7dd255 < uVar1) {
          if (0x2d008992 < uVar1) {
            if (uVar1 != 0x2e4dd8d6) {
              if (uVar1 == 0x2f42e727) goto LAB_056cd640;
              if (uVar1 == 0x2fdd0ccd) {
                lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                            System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_TypeInfo
                                          );
                FUN_056cde74(lVar2,uVar3);
                return lVar2;
              }
              goto LAB_056cd524;
            }
            goto LAB_056cd500;
          }
          if (uVar1 == 0x2a8f1055) goto LAB_056cd500;
          uVar4 = 0x2d008992;
          goto LAB_056ccc34;
        }
        if (0x2955af24 < uVar1) {
          if (uVar1 == 0x296116e5) goto LAB_056cd234;
          if (uVar1 == 0x2a7dd255) goto LAB_056ccfa4;
          goto LAB_056cd524;
        }
        if (uVar1 == 0x267cf743) goto LAB_056cd5f8;
        uVar4 = 0x2955af24;
      }
    }
    else {
      if (uVar1 < 0x39607bfd) {
        if (0x35692f2b < uVar1) {
          if (uVar1 < 0x35f6769c) {
            if (uVar1 != 0x35728882) {
              if (uVar1 == 0x35f6769b) goto LAB_056cd688;
              goto LAB_056cd524;
            }
            goto LAB_056cd500;
          }
          if (uVar1 == 0x37f21084) goto OVRTelemetry__AddPlayModeOrigin;
          if (uVar1 == 0x387e7f36) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<bool,_ulong>_TypeInfo);
            FUN_056ce6b4(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x39607bfc;
          goto LAB_056cd42c;
        }
        if (0x316509dc < uVar1) {
          if (uVar1 == 0x3271abda) goto OVRTelemetry__AddPlayModeOrigin;
          uVar4 = 0x35692f2b;
          goto LAB_056cd3ac;
        }
        if (uVar1 == 0x314c84b8) goto LAB_056cd500;
        uVar4 = 0x316509dc;
LAB_056ccf5c:
        if (uVar1 == uVar4) {
LAB_056cd5b0:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                                    );
          FUN_056ce02c(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (0x3cdbe826 < uVar1) {
        if (uVar1 < 0x3f9b0d0e) {
          if (uVar1 == 0x3e20cb57) goto OVRTelemetry__AddPlayModeOrigin;
          if (uVar1 == 0x3f9b0d0d) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<byte,_sbyte>_TypeInfo);
            FUN_056ce8c4(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0x41cfda50) goto LAB_056cd4ac;
        if (uVar1 == 0x420ac1cf) goto LAB_056cd664;
        uVar4 = 0x43264356;
OVRTelemetry_QPLTelemetryClient___ctor:
        if (uVar1 == uVar4) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
          FUN_056cdfd4(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (uVar1 < 0x3aaf591e) {
        if (uVar1 == 0x3a0f8419) goto LAB_056cce60;
        uVar4 = 0x3aaf591d;
        goto FUN_056cd2ac;
      }
      if ((uVar1 == 0x3c147509) || (uVar1 == 0x3c9e46cd)) goto LAB_056cd500;
      uVar4 = 0x3cdbe826;
    }
    goto FUN_056cd4f8;
  }
  if (0x5db3474c < uVar1) {
    if (uVar1 < 0x6da7ba90) {
      if (0x67526a83 < uVar1) {
        if (uVar1 < 0x68f2f200) {
          if (uVar1 < 0x679a84b7) {
            if (uVar1 == 0x675f5c24) goto LAB_056cd500;
            if (uVar1 == 0x679a84b6) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Unity_Properties_TypeConverter<bool,_short>_TypeInfo);
              FUN_056ce39c(lVar2,uVar3);
              return lVar2;
            }
          }
          else {
            if (uVar1 == 0x6859d641) goto LAB_056cd234;
            if (uVar1 == 0x68670a0e) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo);
              FUN_056cdc64(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x68f2f1ff) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>_TypeInfo);
              FUN_056ce0dc(lVar2,uVar3);
              return lVar2;
            }
          }
          goto LAB_056cd524;
        }
        if (0x6bcf9e47 < uVar1) {
          if (uVar1 == 0x6d1c8906) goto LAB_056cd500;
          if (uVar1 == 0x6d5d7886) {
LAB_056cd664:
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Vector3,_Vector3>_TypeInfo);
            FUN_056cdd6c(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x6da7ba8f;
          goto LAB_056cd3ac;
        }
        if (uVar1 == 0x6ad44ef8) {
LAB_056cd688:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<bool,_sbyte>_TypeInfo);
          FUN_056ce44c(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x6bcf9e47;
LAB_056ccf18:
        if (uVar1 == uVar4) {
LAB_056ccf20:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<char,_object>_TypeInfo);
          FUN_056cebdc(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (uVar1 < 0x6388a555) {
        if (uVar1 < 0x6336cefb) {
          if (uVar1 == 0x629101bc) goto LAB_056ccfa4;
          uVar4 = 0x6336cefa;
          goto LAB_056ccc34;
        }
        if (uVar1 == 0x63599e2b) goto LAB_056cce60;
        uVar4 = 0x6388a554;
        goto FUN_056cd4f8;
      }
      if (0x66093981 < uVar1) {
        if (uVar1 == 0x663a8b5f) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<byte,_float>_TypeInfo);
          FUN_056ce974(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x67367f45) goto LAB_056cd6ac;
        if (uVar1 == 0x67526a83) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<byte,_ushort>_TypeInfo);
          FUN_056cea24(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_056cd524;
      }
      if (uVar1 == 0x651b4884) goto LAB_056cd6d0;
      uVar4 = 0x66093981;
    }
    else {
      if (0x74d948f3 < uVar1) {
        if (uVar1 < 0x7c2afdcc) {
          if (uVar1 < 0x77584ef4) {
            if (uVar1 == 0x773889f6) {
              lVar2 = thunk_FUN_02dd3144(*(undefined8 *)TMPro_TweenRunner<FloatTween>_TypeInfo);
              FUN_056ce1e4(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x77584ef3) goto LAB_056cd234;
            goto LAB_056cd524;
          }
          if (uVar1 != 0x78c90470) {
            if (uVar1 == 0x7c2060de) goto LAB_056cd5d4;
            if (uVar1 == 0x7c2afdcb) goto LAB_056cd0d8;
            goto LAB_056cd524;
          }
          goto LAB_056cd5b0;
        }
        if (uVar1 < 0x7dd46e30) {
          if (uVar1 == 0x7d201556) {
LAB_056cd0d8:
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo);
            FUN_056cdf24(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x7dd46e2f) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo
                                      );
            FUN_056ced94(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0x7e9acaf5) goto OVRTelemetry_TelemetryClient__MarkerAnnotation;
        if (uVar1 == 0x7f4ca0c6) goto LAB_056cd5b0;
        uVar4 = 0x7f79bcaa;
        goto FUN_056cd4f8;
      }
      if (uVar1 < 0x70ba3aef) {
        if (0x6ee4f33c < uVar1) {
          if (uVar1 == 0x6fd62528) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Unity_Properties_TypeConverter<bool,_char>_TypeInfo);
            FUN_056ce2ec(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x70ba3aee;
          goto LAB_056ccf18;
        }
        if (uVar1 == 0x6daa9cc3) goto LAB_056cd500;
        uVar4 = 0x6ee4f33c;
      }
      else {
        if (uVar1 < 0x72c692fb) {
          if (uVar1 == 0x717259e3) goto LAB_056cd500;
          uVar4 = 0x72c692fa;
          goto LAB_056cce9c;
        }
        if (uVar1 == 0x7321939c) goto OVRTelemetry__AddPlayModeOrigin;
        if (uVar1 == 0x744ce345) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<bool,_ushort>_TypeInfo);
          FUN_056ce604(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x74d948f3;
      }
    }
FUN_056cd2ac:
    if (uVar1 == uVar4) {
OVRTelemetry__AddPlayModeOrigin:
      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)Unity_Properties_TypeConverter<char,_bool>_TypeInfo)
      ;
      FUN_056ceb2c(lVar2,uVar3);
      return lVar2;
    }
    goto LAB_056cd524;
  }
  if (uVar1 < 0x4e207cda) {
    if (0x4901dac0 < uVar1) {
      if (uVar1 < 0x4b49c203) {
        if (uVar1 < 0x49e6dbfb) {
          if (uVar1 == 0x49864735) goto OVRTelemetry__AddPlayModeOrigin;
          uVar4 = 0x49e6dbfa;
          goto FUN_056cd2ac;
        }
        if (uVar1 == 0x4afc6f74) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<string,_string>_TypeInfo);
          FUN_056cdd14(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x4b49c202;
      }
      else {
        if (0x4c5b268a < uVar1) {
          if (uVar1 == 0x4db6aff8) goto LAB_056cd500;
          if (uVar1 == 0x4e078eee) goto OVRTelemetry__AddPlayModeOrigin;
          uVar4 = 0x4e207cd9;
          goto LAB_056cd42c;
        }
        if (uVar1 == 0x4b8efc86) goto LAB_056cd500;
        uVar4 = 0x4c5b268a;
      }
FUN_056cd4f8:
      if (uVar1 == uVar4) {
LAB_056cd500:
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Unity_Properties_TypeConverter<char,_sbyte>_TypeInfo);
        FUN_056cbc14(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_056cd524;
    }
    if (uVar1 < 0x453fc9ab) {
      if (0x446aecfa < uVar1) {
        if (uVar1 == 0x44fc006e) {
LAB_056cd5d4:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo);
          FUN_056cdbb4(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x453fc9aa) goto LAB_056cd6f4;
        goto LAB_056cd524;
      }
      if (uVar1 == 0x436f345d) goto LAB_056ccf20;
      uVar4 = 0x446aecfa;
LAB_056cc7bc:
      if (uVar1 == uVar4) {
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                                  );
        FUN_056cddc4(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_056cd524;
    }
    if (uVar1 < 0x47570a96) {
      if (uVar1 == 0x4737ea1d) {
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo);
        FUN_056ce23c(lVar2,uVar3);
        return lVar2;
      }
      if (uVar1 == 0x47570a95) {
LAB_056cce60:
        lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Unity_Properties_TypeConverter<byte,_object>_TypeInfo);
        FUN_056ce91c(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_056cd524;
    }
    if (uVar1 == 0x47933760) {
      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)Unity_Properties_TypeConverter<byte,_char>_TypeInfo)
      ;
      FUN_056ce764(lVar2,uVar3);
      return lVar2;
    }
    if (uVar1 == 0x48ff55be) goto LAB_056cd500;
    uVar4 = 0x4901dac0;
  }
  else {
    if (uVar1 < 0x57b752b4) {
      if (uVar1 < 0x521adf0e) {
        if (uVar1 < 0x51659515) {
          if (uVar1 == 0x4f9fde1d) goto LAB_056cd640;
          uVar4 = 0x51659514;
          goto LAB_056cc7bc;
        }
        if (uVar1 == 0x51f8ce0c) goto LAB_056cd3b4;
        uVar4 = 0x521adf0d;
      }
      else {
        if (uVar1 < 0x5534a925) {
          if (uVar1 == 0x54e2d1f8) goto OVRTelemetry__AddPlayModeOrigin;
          if (uVar1 == 0x5534a924) {
            lVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Tuple<Action<object>,_object>_TypeInfo)
            ;
            OVRTelemetryMarker__AddAnnotation(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_056cd524;
        }
        if (uVar1 == 0x568e76c0) goto LAB_056cd234;
        if (uVar1 == 0x5793f456) {
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<bool,_float>_TypeInfo);
          FUN_056ce554(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x57b752b3;
      }
      goto FUN_056cd4f8;
    }
    if (uVar1 < 0x5ae8cd53) {
      if (uVar1 < 0x587c2a8e) {
        if (uVar1 == 0x586f2d14) {
LAB_056cd6ac:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Meta_XR_ImmersiveDebugger_Manager_Tweak<float>_TypeInfo);
          FUN_056ce18c(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x587c2a8d) goto LAB_056cd5f8;
      }
      else {
        if (uVar1 == 0x58d254a5) {
LAB_056cd6f4:
          lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Properties_TypeConverter<char,_byte>_TypeInfo);
          FUN_056ceb84(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x593ccbdd) goto LAB_056cd61c;
        if (uVar1 == 0x5ae8cd52) goto LAB_056cd664;
      }
      goto LAB_056cd524;
    }
    if (uVar1 < 0x5b7ca1b7) {
      if (uVar1 == 0x5b4fbbe0) goto LAB_056ccd94;
      uVar4 = 0x5b7ca1b6;
      goto OVRTelemetry_QPLTelemetryClient___ctor;
    }
    if (uVar1 == 0x5cd7a24f) goto LAB_056cd760;
    if (uVar1 == 0x5d955d38) goto LAB_056cd4ac;
    uVar4 = 0x5db3474c;
  }
LAB_056cd42c:
  if (uVar1 == uVar4) {
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)Unity_Properties_TypeConverter<bool,_object>_TypeInfo)
    ;
    FUN_056ce4a4(lVar2,uVar3);
    return lVar2;
  }
LAB_056cd524:
  lVar2 = FUN_056cee44(in_stack_00000018,uVar1);
  if (lVar2 == 0) {
    uStack000000000000000c = uVar1;
    uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                System_Net_Http_Headers_TryParseListDelegate<TransferCodingHeaderValue>_TypeInfo
                               ,&stack0x0000000c);
    uVar3 = FUN_0536388c(*(undefined8 *)Unity_Properties_TypeConverter<char,_float>_TypeInfo,uVar3,0
                        );
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_0630bbe4(uVar3,0);
    return 0;
  }
  return lVar2;
}


