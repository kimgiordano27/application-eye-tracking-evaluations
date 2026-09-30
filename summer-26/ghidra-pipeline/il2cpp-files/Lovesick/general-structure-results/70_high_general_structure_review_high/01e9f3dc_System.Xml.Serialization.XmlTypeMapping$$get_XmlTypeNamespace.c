/*
FUNCTION_NAME: System.Xml.Serialization.XmlTypeMapping$$get_XmlTypeNamespace
ENTRY_POINT: 01e9f3dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01e9fbe0) */

void System_Xml_Serialization_XmlTypeMapping__get_XmlTypeNamespace(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long *plVar16;
  long in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_01f7609c(param_1,0);
  puVar3 = StringLiteral_13941;
  puVar2 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  if ((uVar8 & 1) == 0) {
                    /* try { // try from 01e9f418 to 01f9f423 has its CatchHandler @ 01e9ea44 */
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 01e9f424 to 01f9f42b has its CatchHandler @ 01e9f434 */
                    /* catch() { ... } // from try @ 01e9f3a0 with catch @ 01e9f42c */
    plVar16 = (long *)FUN_01ec1550(*(long *)(unaff_x19 + 0x58),
                                   *(undefined8 *)(in_stack_00000008 + 0xa0),0);
    if (plVar16 == (long *)0x0) {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar16 = *(long **)(in_stack_00000008 + 0xa0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      lVar14 = thunk_FUN_00d62348();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = thunk_FUN_00d48444(StringLiteral_1199);
      FUN_01ebeb58(lVar14,uVar13,uVar12,in_stack_00000008,0);
      uVar12 = thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar14,uVar12);
    }
    lVar14 = *(long *)puVar3;
    bVar5 = *(byte *)(lVar14 + 300);
    if ((*(byte *)(*plVar16 + 300) < bVar5) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar16);
    }
    FUN_01e9f2ec();
    if (plVar16[0x1c] == 0) {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar16 = *(long **)(in_stack_00000008 + 0xa0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      lVar14 = thunk_FUN_00d62348();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = thunk_FUN_00d48444(Method_Obi_ObiPathDataChannelIdentity<Color>__ctor__);
      FUN_01ebeb58(lVar14,uVar13,uVar12,in_stack_00000008,0);
      uVar12 = thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar14,uVar12);
    }
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(in_stack_00000008 + 200) = plVar16[0x19];
    lVar14 = FUN_01e916ac();
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(in_stack_00000008 + 0xb8) == 0) {
      if (*(long *)(in_stack_00000008 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_01f7609c(*(long *)(in_stack_00000008 + 0xb0),0);
      if ((uVar8 & 1) == 0) {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = FUN_01ea6b70();
        *(undefined8 *)(in_stack_00000008 + 200) = uVar12;
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(in_stack_00000008 + 200) == 0) {
          plVar16 = *(long **)(in_stack_00000008 + 0xb0);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar12 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
          thunk_FUN_00d48444(PTR_DAT_033ec070);
          lVar14 = thunk_FUN_00d62348();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = thunk_FUN_00d48444(PTR_DAT_033eeb00);
          FUN_01ebeb58(lVar14,uVar13,uVar12,in_stack_00000008,0);
          uVar12 = thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar14,uVar12);
        }
        goto LAB_01e9f5a8;
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_00000008 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_01f7609c(*(long *)(in_stack_00000008 + 0xa8),0);
      if ((uVar8 & 1) == 0) {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar16 = (long *)FUN_01ec1550(*(long *)(unaff_x19 + 0x58),
                                       *(undefined8 *)(in_stack_00000008 + 0xa8),0);
        if (plVar16 == (long *)0x0) {
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(in_stack_00000008 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar15 = *(long *)(*(long *)(in_stack_00000008 + 0xa8) + 0x10);
          lVar14 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01731954(0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar12 = FUN_015ffa5c(lVar15,uVar12,0);
          thunk_FUN_00d48444(PTR_DAT_033ec070);
          lVar14 = thunk_FUN_00d62348();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_u32__);
          FUN_01ebeb58(lVar14,uVar13,uVar12,in_stack_00000008,0);
          uVar12 = thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar14,uVar12);
        }
        lVar14 = *(long *)puVar3;
        bVar5 = *(byte *)(lVar14 + 300);
        if ((*(byte *)(*plVar16 + 300) < bVar5) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar16);
        }
        if ((char)plVar16[6] != '\0') goto LAB_01e9fa60;
        FUN_01e9f2ec();
        if (plVar16[0x1c] == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_0377fd9c == '\0') {
            thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
            DAT_0377fd9c = '\x01';
          }
          lVar14 = *(long *)puVar2;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar14 = *(long *)puVar2;
          }
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined8 *)(in_stack_00000008 + 200) = **(undefined8 **)(lVar14 + 0xb8);
          puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
          if (DAT_0377fd9c == '\0') {
            thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
            lVar14 = *(long *)puVar3;
            DAT_0377fd9c = '\x01';
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar14 = *(long *)puVar2;
          }
          if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = FUN_01ecb830(**(long **)(lVar14 + 0xb8),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = FUN_01e916ac();
        }
        else {
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(long *)(in_stack_00000008 + 200) = plVar16[0x19];
          lVar14 = FUN_01e916ac();
        }
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_0377fd9c == '\0') {
          thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
          DAT_0377fd9c = '\x01';
        }
        lVar14 = *(long *)puVar2;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)puVar2;
        }
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined8 *)(in_stack_00000008 + 200) = **(undefined8 **)(lVar14 + 0xb8);
        puVar3 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
        if (DAT_0377fd9c == '\0') {
          thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
          lVar14 = *(long *)puVar3;
          DAT_0377fd9c = '\x01';
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)puVar2;
        }
        if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = FUN_01ecb830(**(long **)(lVar14 + 0xb8),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = FUN_01e916ac();
      }
      if (lVar14 == 0) {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        goto LAB_01e9f5a8;
      }
    }
    else {
      *(long *)(in_stack_00000008 + 200) = *(long *)(in_stack_00000008 + 0xb8);
LAB_01e9f5a8:
      plVar16 = *(long **)(in_stack_00000008 + 200);
      lVar14 = 0;
      if (plVar16 != (long *)0x0) {
        lVar14 = *plVar16;
        bVar5 = *(byte *)(*(long *)puVar2 + 300);
        if ((*(byte *)(lVar14 + 300) < bVar5) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2)) {
          bVar5 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
          if ((bVar5 <= *(byte *)(lVar14 + 300)) &&
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar5 * 8 + -8) ==
              *(long *)PTR_DAT_033f19d8)) {
            FUN_01e9e9f0();
            lVar14 = FUN_01ecb830(plVar16,0);
            if (lVar14 != 0) {
              lVar14 = FUN_01ecb830(plVar16,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar14 = FUN_01e916ac();
              goto LAB_01e9f678;
            }
          }
        }
        else {
          FUN_01e9df38();
          lVar14 = FUN_01ecb830(plVar16,0);
          if (lVar14 != 0) {
            lVar14 = FUN_01ecb830(plVar16,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = FUN_01e916ac();
            goto LAB_01e9f678;
          }
        }
        lVar14 = 0;
      }
    }
LAB_01e9f678:
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(in_stack_00000008 + 0xc0);
    cVar1 = *(char *)(in_stack_00000008 + 0x74);
    *(char *)(lVar14 + 0x72) = cVar1;
    plVar16 = *(long **)(in_stack_00000008 + 200);
    if (plVar16 != (long *)0x0) {
      bVar5 = *(byte *)(*(long *)puVar2 + 300);
      if ((bVar5 <= *(byte *)(*plVar16 + 300)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) == *(long *)puVar2)) {
        bVar5 = FUN_01ebc0b4(plVar16,0);
        *(byte *)(lVar14 + 0x72) = cVar1 != '\0' | bVar5 & 1;
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
    *(undefined1 *)(lVar14 + 0x73) = *(undefined1 *)(in_stack_00000008 + 0x76);
    *(uint *)(lVar14 + 0x90) = *(uint *)(in_stack_00000008 + 0xd0) | *(uint *)(lVar14 + 0x90);
  }
  plVar16 = *(long **)(lVar14 + 0x30);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x298))
              (plVar16,*(undefined8 *)(unaff_x19 + 0x70),in_stack_00000008,
               *(undefined8 *)(*plVar16 + 0x2a0));
  }
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (((*(long *)(in_stack_00000008 + 0x88) != 0) || (*(long *)(in_stack_00000008 + 0x90) != 0)) &&
     (plVar16 = *(long **)(lVar14 + 0x80), plVar16 != (long *)0x0)) {
    if ((int)plVar16[2] != 0) {
      if (((int)plVar16[2] != 3) ||
         (uVar8 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180)),
         (uVar8 & 1) == 0)) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        lVar14 = thunk_FUN_00d62348();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = thunk_FUN_00d48444(StringLiteral_8466);
        FUN_01ebead4(lVar14,uVar12,in_stack_00000008,0);
        uVar12 = thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar14,uVar12);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    lVar15 = *(long *)(in_stack_00000008 + 0x88);
    if (lVar15 == 0) {
      *(undefined4 *)(lVar14 + 0x24) = 3;
      lVar15 = *(long *)(in_stack_00000008 + 0x90);
    }
    else {
      *(undefined4 *)(lVar14 + 0x24) = 0;
    }
    *(long *)(lVar14 + 0x38) = lVar15;
    puVar4 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
    puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    puVar2 = PTR_DAT_033f3250;
    plVar16 = *(long **)(lVar14 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (*(int *)(*(long *)
                    Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377fe0d == '\0') {
        thunk_FUN_00d48444(
                          Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                          );
        DAT_0377fe0d = '\x01';
      }
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar4;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar16 = *(long **)(lVar15 + 0x68);
      if ((DAT_0377fe30 & 1) == 0) {
        thunk_FUN_00d48444(
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                          );
        DAT_0377fe30 = 1;
      }
      lVar15 = *(long *)(lVar14 + 0x38);
      if (lVar15 == 0) {
        lVar15 = **(long **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01f74f24(lVar11,0);
      *(long *)(lVar11 + 0x50) = in_stack_00000008;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar16 + 0x198))
                         (plVar16,lVar15,uVar12,lVar11,*(undefined8 *)(*plVar16 + 0x1a0));
    }
    else {
      iVar6 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      if (iVar6 == 0x25) {
        FUN_01fad0ec();
        goto LAB_01e9f940;
      }
      plVar16 = *(long **)(lVar14 + 0x30);
      if ((DAT_0377fe30 & 1) == 0) {
        thunk_FUN_00d48444(
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                          );
        DAT_0377fe30 = 1;
      }
      lVar15 = *(long *)(lVar14 + 0x38);
      if (lVar15 == 0) {
        lVar15 = **(long **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01f74f24(lVar11,0);
      *(long *)(lVar11 + 0x50) = in_stack_00000008;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar16 + 0x228))
                         (plVar16,lVar15,uVar12,lVar11,1,*(undefined8 *)(*plVar16 + 0x230));
    }
    *(undefined8 *)(lVar14 + 0x40) = uVar12;
  }
LAB_01e9f940:
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_01ebe12c(in_stack_00000008,0);
  if ((uVar8 & 1) != 0) {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar16 = (long *)FUN_01ebe080(in_stack_00000008,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_0173d2f4(plVar16,0);
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_Mono_Security_Cryptography_SymmetricTransform_TransformBlock__
                                  ,uVar7);
    puVar2 = Method_System_Convert_FromBase64_ComputeResultLength__;
    for (uVar8 = 0; iVar6 = FUN_0173d2f4(plVar16,0), (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
      plVar10 = (long *)(**(code **)(*plVar16 + 0x308))
                                  (plVar16,uVar8 & 0xffffffff,*(undefined8 *)(*plVar16 + 0x310));
      if (plVar10 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)puVar2 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar5) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
      }
      FUN_01ea0afc();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = plVar10[0xe];
      if ((lVar15 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[uVar8 + 4] = lVar15;
    }
    *(long **)(lVar14 + 0x98) = plVar9;
  }
  *(long *)(lVar14 + 0xa0) = in_stack_00000008;
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(long *)(in_stack_00000008 + 0xe0) = lVar14;
LAB_01e9fa60:
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined1 *)(in_stack_00000008 + 0x30) = 0;
  return;
}


