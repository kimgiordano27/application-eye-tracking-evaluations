/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetCurrentGridAlpha$$Invoke
ENTRY_POINT: 05620dc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha__Invoke(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  bool bVar7;
  undefined4 uVar8;
  
  FUN_02d965b8(System_Func<Hole,_int>_TypeInfo);
  FUN_02d965b8(System_Func<IAsyncResult,_IPAddress[]>_TypeInfo);
  FUN_02d965b8(System_Func<IAsyncResult,_HttpListenerContext>_TypeInfo);
  FUN_02d965b8(System_Func<IAsyncResult,_Stream>_TypeInfo);
  FUN_02d965b8(System_Func<IAsyncResult,_Task>_TypeInfo);
  FUN_02d965b8(System_Func<IAsyncResult,_WebResponse>_TypeInfo);
  FUN_02d965b8(System_Func<IChannelSession,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<ILayoutElement,_float>_TypeInfo);
  FUN_02d965b8(System_Func<IReadOnlyPlayer,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<ISessionInfo,_bool>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa5e) = 1;
  lVar6 = *(long *)(unaff_x19 + 0xd0);
  if (lVar6 == 0) {
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630bbe4(*(undefined8 *)System_Func<IChannelSession,_bool>_TypeInfo,0);
    return;
  }
  if (*(char *)(unaff_x19 + 0xf2) == '\0') {
    if (((*(char *)(unaff_x19 + 0xa0) == '\0') && (*(char *)(unaff_x19 + 0xa1) == '\0')) &&
       (*(char *)(unaff_x19 + 0xa2) == '\0')) {
      bVar3 = *(char *)(unaff_x19 + 0xa3) != '\0';
    }
    else {
      bVar3 = true;
    }
    thunk_FUN_062f3fb8(lVar6,*(undefined8 *)System_Func<IAsyncResult,_Stream>_TypeInfo,bVar3,0);
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                         *(undefined8 *)System_Func<IAsyncResult,_IPAddress[]>_TypeInfo,
                         *(undefined1 *)(unaff_x19 + 0xa0),0);
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                           *(undefined8 *)System_Func<IAsyncResult,_Task>_TypeInfo,
                           *(undefined1 *)(unaff_x19 + 0xa1),0);
        if (*(long *)(unaff_x19 + 0xd0) != 0) {
          thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                             *(undefined8 *)System_Func<HierarchySearchFilter,_bool>_TypeInfo,
                             *(undefined1 *)(unaff_x19 + 0xa2),0);
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                               *(undefined8 *)System_Func<IAsyncResult,_WebResponse>_TypeInfo,
                               *(undefined1 *)(unaff_x19 + 0xa3),0);
            if (*(long *)(unaff_x19 + 0xd0) != 0) {
              thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                 *(undefined8 *)System_Func<Glyph,_uint>_TypeInfo,
                                 *(undefined1 *)(unaff_x19 + 0xa4),0);
              if (*(long *)(unaff_x19 + 0xd0) != 0) {
                thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                   *(undefined8 *)
                                    System_Func<GlyphPairAdjustmentRecord,_uint>_TypeInfo,
                                   *(undefined1 *)(unaff_x19 + 0xa5),0);
                if (*(long *)(unaff_x19 + 0xd0) != 0) {
                  thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0x9c),*(long *)(unaff_x19 + 0xd0),
                                     *(undefined8 *)System_Func<ILayoutElement,_float>_TypeInfo,0);
                  if (*(long *)(unaff_x19 + 0xd0) != 0) {
                    thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0xa8),*(long *)(unaff_x19 + 0xd0)
                                       ,*(undefined8 *)System_Func<Hole,_int>_TypeInfo,0);
                    if (*(long *)(unaff_x19 + 0xd0) != 0) {
                      thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                         *(undefined8 *)
                                          System_Func<HierarchyNode,_HierarchyNode>_TypeInfo,
                                         *(undefined1 *)(unaff_x19 + 0xac),0);
                      if (*(long *)(unaff_x19 + 0xd0) != 0) {
                        thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0xb0),
                                           *(long *)(unaff_x19 + 0xd0),
                                           *(undefined8 *)
                                            System_Func<IAsyncResult,_HttpListenerContext>_TypeInfo,
                                           0);
                        if (*(long *)(unaff_x19 + 0xd0) != 0) {
                          thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                             *(undefined8 *)
                                              System_Func<IReadOnlyPlayer,_bool>_TypeInfo,
                                             *(undefined1 *)(unaff_x19 + 0xf0),0);
                          if (*(long *)(unaff_x19 + 0xd0) != 0) {
                            thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0xb8),
                                               *(long *)(unaff_x19 + 0xd0),
                                               *(undefined8 *)
                                                System_Func<ISessionInfo,_bool>_TypeInfo,0);
                            lVar6 = *(long *)(unaff_x19 + 0xd0);
                            if (*(char *)(unaff_x19 + 0xac) == '\0') {
                              if (lVar6 != 0) {
                                uVar2 = *(undefined4 *)(unaff_x19 + 200);
                                uVar8 = 0x3f800000;
                                goto LAB_056210ac;
                              }
                            }
                            else if (lVar6 != 0) {
                              uVar8 = 0x3f000000;
                              uVar2 = *(undefined4 *)(unaff_x19 + 200);
LAB_056210ac:
                              FUN_062f4b54(uVar8,lVar6,uVar2,0);
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
    goto LAB_056212cc;
  }
  iVar1 = *(int *)(unaff_x19 + 0xf4);
  bVar4 = false;
  bVar3 = true;
  if (iVar1 == 1) {
LAB_056210d4:
    if (iVar1 != 4) {
LAB_056210e4:
      bVar7 = iVar1 == 7;
      if (iVar1 != 6) goto LAB_056210f4;
    }
    bVar7 = iVar1 == 7;
    bVar5 = true;
  }
  else {
    bVar7 = true;
    if (iVar1 != 5) {
      bVar3 = iVar1 == 6;
      if ((iVar1 == 2) || (iVar1 == 7)) {
        bVar4 = true;
        goto LAB_056210e4;
      }
      bVar4 = iVar1 == 8;
      if (iVar1 != 3) goto LAB_056210d4;
    }
LAB_056210f4:
    bVar5 = iVar1 == 8;
  }
  thunk_FUN_062f3fb8(lVar6,*(undefined8 *)System_Func<IAsyncResult,_Stream>_TypeInfo,
                     bVar5 | bVar3 | bVar7 | bVar4,0);
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                       *(undefined8 *)System_Func<IAsyncResult,_IPAddress[]>_TypeInfo,bVar3,0);
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                         *(undefined8 *)System_Func<IAsyncResult,_Task>_TypeInfo,bVar4,0);
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                           *(undefined8 *)System_Func<HierarchySearchFilter,_bool>_TypeInfo,bVar7,0)
        ;
        if (*(long *)(unaff_x19 + 0xd0) != 0) {
          thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                             *(undefined8 *)System_Func<IAsyncResult,_WebResponse>_TypeInfo,bVar5,0)
          ;
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                               *(undefined8 *)System_Func<Glyph,_uint>_TypeInfo,iVar1 == 9,0);
            if (*(long *)(unaff_x19 + 0xd0) != 0) {
              thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                 *(undefined8 *)
                                  System_Func<GlyphPairAdjustmentRecord,_uint>_TypeInfo,iVar1 == 10,
                                 0);
              if (*(long *)(unaff_x19 + 0xd0) != 0) {
                thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                   *(undefined8 *)System_Func<HierarchyNode,_HierarchyNode>_TypeInfo
                                   ,iVar1 == 0xb,0);
                if (*(long *)(unaff_x19 + 0xd0) != 0) {
                  thunk_FUN_062f3fb8(*(long *)(unaff_x19 + 0xd0),
                                     *(undefined8 *)System_Func<IReadOnlyPlayer,_bool>_TypeInfo,
                                     iVar1 == 0xc,0);
                  if (*(long *)(unaff_x19 + 0xd0) != 0) {
                    thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0xfc),*(long *)(unaff_x19 + 0xd0)
                                       ,*(undefined8 *)System_Func<ISessionInfo,_bool>_TypeInfo,0);
                    if (*(long *)(unaff_x19 + 0xd0) != 0) {
                      thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0x100),
                                         *(long *)(unaff_x19 + 0xd0),
                                         *(undefined8 *)System_Func<ILayoutElement,_float>_TypeInfo,
                                         0);
                      if (*(long *)(unaff_x19 + 0xd0) != 0) {
                        thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0xf8),
                                           *(long *)(unaff_x19 + 0xd0),
                                           *(undefined8 *)System_Func<Hole,_int>_TypeInfo,0);
                        if (*(long *)(unaff_x19 + 0xd0) != 0) {
                          thunk_FUN_062f3cec(*(undefined4 *)(unaff_x19 + 0x104),
                                             *(long *)(unaff_x19 + 0xd0),
                                             *(undefined8 *)
                                              System_Func<IAsyncResult,_HttpListenerContext>_TypeInfo
                                             ,0);
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
LAB_056212cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


