/*
FUNCTION_NAME: FUN_0556da9c
ENTRY_POINT: 0556da9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0556e4e4) */
/* WARNING: Removing unreachable block (ram,0x0556e16c) */
/* WARNING: Removing unreachable block (ram,0x0556e70c) */
/* WARNING: Removing unreachable block (ram,0x0556e744) */
/* WARNING: Removing unreachable block (ram,0x0556e9b8) */
/* WARNING: Removing unreachable block (ram,0x0556e644) */
/* WARNING: Removing unreachable block (ram,0x0556e954) */
/* WARNING: Removing unreachable block (ram,0x0556e73c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0556da9c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  
  puVar3 = PTR_DAT_067c9f00;
  if ((DAT_06bbf944 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_Xml_Schema_XdrBuilder_XdrInitFunction_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9f00);
    FUN_02f08768(System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02f08768(Method_System_Xml_ArrayHelper<string,_double>__ctor__);
    DAT_06bbf944 = 1;
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar3;
  }
  if (**(long **)(lVar9 + 0xb8) != 0) {
    uVar10 = FUN_033753f4(**(long **)(lVar9 + 0xb8),
                          *(undefined8 *)Method_System_Xml_ArrayHelper<string,_double>__ctor__,
                          *(undefined4 *)(param_1 + 0x88),
                          *(undefined8 *)System_Xml_Schema_XdrBuilder_XdrInitFunction_TypeInfo);
    uVar11 = thunk_FUN_02f1863c(param_1,0);
    plVar12 = (long *)Newtonsoft_Json_Linq_JToken__ReadFromAsync(uVar11,1,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar12);
    }
    plVar13 = (long *)plVar12[5];
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar6 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar6) {
      (**(code **)(*plVar12 + 0x288))(plVar12,*(undefined8 *)(*plVar12 + 0x290));
    }
    FUN_055685dc(plVar12,*(undefined8 *)(param_1 + 0x40));
    FUN_0556b7d8(plVar12,*(undefined1 *)(param_1 + 0x59));
    plVar12[0xc] = *(long *)(param_1 + 0x60);
    *(undefined1 *)(plVar12 + 0xd) = *(undefined1 *)(param_1 + 0x68);
    FUN_0556b66c(plVar12,*(undefined1 *)(param_1 + 0x58));
    FUN_0556c608(plVar12,*(undefined8 *)(param_1 + 0x50));
    FUN_0556ca84(plVar12,*(undefined8 *)(param_1 + 0x48));
    System_Xml_XmlDictionaryWriter_XmlWrappedWriter__WriteBase64
              (plVar12,*(undefined4 *)(param_1 + 0x78));
    *(undefined1 *)((long)plVar12 + 0x6e) = 1;
    puVar5 = 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
    puVar4 = 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
    ;
    puVar2 = PTR_DAT_067c91b8;
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    for (iVar6 = 0;
        iVar7 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0)),
        iVar6 < iVar7; iVar6 = iVar6 + 1) {
      lVar9 = FUN_0558c44c(plVar13,iVar6,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = FUN_055503b8(lVar9,plVar12,0);
      lVar14 = FUN_0558c44c(plVar13,iVar6,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar11 = FUN_05546520(lVar14,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined8 *)(lVar9 + 0x98) = uVar11;
      if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0558cc18(plVar12[5],lVar9,0);
    }
    for (iVar6 = 0;
        iVar7 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0)),
        iVar6 < iVar7; iVar6 = iVar6 + 1) {
      lVar9 = FUN_0558c44c(plVar13,iVar6,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar22 = *(long **)(lVar9 + 0x48);
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      for (iVar7 = 0;
          iVar8 = (**(code **)(*plVar22 + 0x1c8))(plVar22,*(undefined8 *)(*plVar22 + 0x1d0)),
          iVar7 < iVar8; iVar7 = iVar7 + 1) {
        plVar15 = (long *)FUN_0557b300(plVar22,iVar7,0);
        if (plVar15 == (long *)0x0) {
LAB_0556ddd0:
          plVar15 = (long *)FUN_0557b300(plVar22,iVar7,0);
          if (plVar15 == (long *)0x0) {
LAB_0556e6ac:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar9 = *plVar15;
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_0556e6ac;
          lVar9 = (**(code **)(lVar9 + 0x1b8))(plVar15,*(undefined8 *)(lVar9 + 0x1c0));
          lVar14 = (**(code **)(*plVar15 + 0x2c8))(plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
          if (lVar9 != lVar14) {
            if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = FUN_0558c44c(plVar12[5],iVar6,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar9 = *(long *)(lVar9 + 0x48);
            plVar15 = (long *)FUN_0557b300(plVar22,iVar7,0);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar11 = (**(code **)(*plVar15 + 0x1e8))
                               (plVar15,plVar12,*(undefined8 *)(*plVar15 + 0x1f0));
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar11,uVar11);
            }
            FUN_0557b64c(lVar9,uVar11,0);
          }
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
          goto LAB_0556ddd0;
        }
      }
    }
    plVar22 = *(long **)(param_1 + 0x30);
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    for (iVar6 = 0;
        iVar7 = (**(code **)(*plVar22 + 0x1c8))(plVar22,*(undefined8 *)(*plVar22 + 0x1d0)),
        iVar6 < iVar7; iVar6 = iVar6 + 1) {
      lVar9 = (**(code **)(*plVar22 + 0x208))(plVar22,iVar6,*(undefined8 *)(*plVar22 + 0x210));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = FUN_05584b3c(lVar9,plVar12,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 *)(lVar9 + 0x7a) = 0;
      if (plVar12[6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_055854fc(plVar12[6],lVar9,0);
      *(undefined1 *)(lVar9 + 0x7a) = 1;
    }
    plVar22 = *(long **)(param_1 + 0x38);
    if (plVar22 != (long *)0x0) {
      plVar22 = (long *)(**(code **)(*plVar22 + 0x388))(plVar22,*(undefined8 *)(*plVar22 + 0x390));
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar22;
      uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067cb558) {
            puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0556df98;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)PTR_DAT_067cb558,0);
LAB_0556df98:
      plVar22 = (long *)(*(code *)*puVar16)(plVar22,puVar16[1]);
      do {
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
              puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0556e00c;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar2,0);
LAB_0556e00c:
        uVar20 = (*(code *)*puVar16)(plVar22,puVar16[1]);
        if ((uVar20 & 1) == 0) {
          plVar22 = (long *)thunk_FUN_02f45174(plVar22,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar22 == (long *)0x0) break;
          lVar9 = *plVar22;
          uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar20 == 0) goto LAB_0556e138;
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0556e120;
        }
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
              puVar16 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_0556e074;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar2,1);
LAB_0556e074:
        uVar11 = (*(code *)*puVar16)(plVar22,puVar16[1]);
        plVar15 = (long *)FUN_0556b5dc(plVar12);
        plVar17 = *(long **)(param_1 + 0x38);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar18 = (**(code **)(*plVar17 + 0x308))(plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar15 + 0x318))(plVar15,uVar11,uVar18,*(undefined8 *)(*plVar15 + 800));
      } while( true );
    }
    goto LAB_0556e170;
  }
  goto LAB_0556e9b4;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_0556e120:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0556e154;
    }
  }
LAB_0556e138:
  puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)PTR_DAT_067c91b0,0);
LAB_0556e154:
  (*(code *)*puVar16)(plVar22,puVar16[1]);
LAB_0556e170:
  plVar22 = *(long **)(param_1 + 0x28);
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar22 = (long *)(**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
  puVar5 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
  puVar4 = System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo;
  do {
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar22;
    uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
          puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0556e200;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar2,0);
LAB_0556e200:
    uVar20 = (*(code *)*puVar16)(plVar22,puVar16[1]);
    if ((uVar20 & 1) == 0) {
      plVar22 = (long *)thunk_FUN_02f45174(plVar22,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar22 == (long *)0x0) goto LAB_0556e634;
      lVar9 = *plVar22;
      uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar20 == 0) goto LAB_0556e60c;
      piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar22;
    uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
          puVar16 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_0556e268;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)puVar2,1);
LAB_0556e268:
    plVar15 = (long *)(*(code *)*puVar16)(plVar22,puVar16[1]);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
    plVar17 = (long *)plVar15[8];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
joined_r0x0556e2cc:
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar17;
    uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
          puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0556e31c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar2,0);
LAB_0556e31c:
    uVar20 = (*(code *)*puVar16)(plVar17,puVar16[1]);
    if ((uVar20 & 1) != 0) {
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar17;
      uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
            puVar16 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_0556e384;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar2,1);
LAB_0556e384:
      plVar19 = (long *)(*(code *)*puVar16)(plVar17,puVar16[1]);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar19);
      }
      lVar9 = FUN_0555f7d8(plVar19);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar9 + 0x10) != 0) {
        lVar9 = plVar12[5];
        lVar14 = plVar15[0x12];
        uVar11 = FUN_05546520(plVar15,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = FUN_05585154(lVar9,lVar14,uVar11,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = FUN_0557e3c8(*(long *)(lVar9 + 0x40),plVar19[6],0);
        uVar11 = FUN_0555f7d8(plVar19);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar11,uVar11);
        }
        FUN_0555c54c(lVar9);
      }
      goto joined_r0x0556e2cc;
    }
    plVar15 = (long *)thunk_FUN_02f45174(plVar17,*(undefined8 *)PTR_DAT_067c91b0);
    if (plVar15 != (long *)0x0) {
      lVar9 = *plVar15;
      uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0556e4cc;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)PTR_DAT_067c91b0,0);
LAB_0556e4cc:
      (*(code *)*puVar16)(plVar15,puVar16[1]);
    }
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar16 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0556e628;
    }
  }
LAB_0556e60c:
  puVar16 = (undefined8 *)FUN_02f421d0(plVar22,*(long *)PTR_DAT_067c91b0,0);
LAB_0556e628:
  (*(code *)*puVar16)(plVar22,puVar16[1]);
LAB_0556e634:
  for (iVar6 = 0; iVar7 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0))
      , iVar6 < iVar7; iVar6 = iVar6 + 1) {
    if (plVar12[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = FUN_0558c44c(plVar12[5],iVar6,0);
    lVar14 = FUN_0558c44c(plVar13,iVar6,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
  }
  *(undefined1 *)((long)plVar12 + 0x6e) = 0;
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar3;
  }
  if (**(long **)(lVar9 + 0xb8) != 0) {
    FUN_0557aac0(**(long **)(lVar9 + 0xb8),uVar10,0);
    return plVar12;
  }
LAB_0556e9b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


