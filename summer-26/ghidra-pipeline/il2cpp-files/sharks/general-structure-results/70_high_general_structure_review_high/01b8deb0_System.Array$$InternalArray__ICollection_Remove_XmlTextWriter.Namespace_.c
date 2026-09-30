/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 01b8deb0
PROGRAM: sharks-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


long * System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *plVar9;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037f81a0);
  FUN_017fc350(PTR_DAT_037f8858);
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_037f9110);
  FUN_017fc350(PTR_DAT_037f8be8);
  FUN_017fc350(PTR_DAT_037f9508);
  FUN_017fc350(PTR_DAT_037f9510);
  FUN_017fc350(PTR_DAT_037f9518);
  FUN_017fc350(PTR_DAT_037f9520);
  FUN_017fc350(PTR_DAT_037f9528);
  FUN_017fc350(PTR_DAT_037f9530);
  FUN_017fc350(PTR_DAT_037f9538);
  FUN_017fc350(PTR_DAT_037f9540);
  FUN_017fc350(PTR_DAT_037f9548);
  FUN_017fc350(PTR_DAT_037f9550);
  FUN_017fc350(PTR_DAT_037f9558);
  puVar7 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0185db00();
    puVar7 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar1 = PTR_DAT_037f2c78;
  uVar8 = *puVar7;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = FUN_02bddb5c(uVar8,0);
  lVar5 = FUN_02bddb5c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),0);
  puVar3 = PTR_DAT_037f9540;
  lVar6 = FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f9540,0);
  puVar2 = PTR_DAT_037f8230;
  if ((lVar4 == lVar5) && (lVar4 == lVar6)) {
    lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
    if (*(long *)(lVar4 + 0x38) == 0) {
      uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9530);
      FUN_019c0760(uVar8,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *puVar7 = uVar8;
      thunk_FUN_0188fd20(puVar7,uVar8);
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    plVar9 = (long *)(lVar4 + 0x38);
  }
  else {
    uVar8 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar6 = FUN_02bddb5c(uVar8,0);
    if (lVar4 == lVar6) {
      uVar8 = *(undefined8 *)PTR_DAT_037f9538;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar6 = FUN_02bddb5c(uVar8,0);
      puVar2 = PTR_DAT_037f8230;
      if (lVar5 == lVar6) {
        lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
        if (*(long *)(lVar4 + 0x70) == 0) {
          uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9528);
          FUN_019b7404(uVar8,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
          *puVar7 = uVar8;
          thunk_FUN_0188fd20(puVar7,uVar8);
          lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        plVar9 = (long *)(lVar4 + 0x70);
        goto LAB_01b8e048;
      }
    }
    puVar2 = PTR_DAT_037f94e8;
    uVar8 = *(undefined8 *)PTR_DAT_037f94e8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar6 = FUN_02bddb5c(uVar8,0);
    if (lVar4 == lVar6) {
      uVar8 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar4 = FUN_02bddb5c(uVar8,0);
      puVar1 = PTR_DAT_037f8230;
      if (lVar5 == lVar4) {
        FUN_019c4138(*(undefined8 *)PTR_DAT_037f9558,0,0);
        return (long *)0x0;
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
      if (*(long *)(lVar4 + 0x48) == 0) {
        uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94e0);
        FUN_019ba8c4(uVar8,0);
        puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
        *puVar7 = uVar8;
        thunk_FUN_0188fd20(puVar7,uVar8);
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      plVar9 = (long *)(lVar4 + 0x48);
    }
    else {
      uVar8 = *(undefined8 *)PTR_DAT_037f9520;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = FUN_02bddb5c(uVar8,0);
      puVar2 = PTR_DAT_037f8230;
      if (lVar4 == lVar5) {
        lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
        if (*(long *)(lVar4 + 0x30) == 0) {
          uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9518);
          FUN_019bd024(uVar8,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
          *puVar7 = uVar8;
          thunk_FUN_0188fd20(puVar7,uVar8);
          lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        plVar9 = (long *)(lVar4 + 0x30);
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_037f8848;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar5 = FUN_02bddb5c(uVar8,0);
        puVar2 = PTR_DAT_037f8230;
        if (lVar4 == lVar5) {
          plVar9 = *(long **)(*(long *)PTR_DAT_037f8230 + 0xb8);
          if (*plVar9 == 0) {
            uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94c8);
            FUN_019bfab4(uVar8,0);
            **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar8;
            thunk_FUN_0188fd20(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar8);
            plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
          }
        }
        else {
          uVar8 = *(undefined8 *)PTR_DAT_037f94b8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar5 = FUN_02bddb5c(uVar8,0);
          puVar2 = PTR_DAT_037f8230;
          if (lVar4 == lVar5) {
            lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
            if (*(long *)(lVar4 + 0x50) == 0) {
              uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94b0);
              FUN_019b94b0(uVar8,0);
              puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
              *puVar7 = uVar8;
              thunk_FUN_0188fd20(puVar7,uVar8);
              lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
            }
            plVar9 = (long *)(lVar4 + 0x50);
          }
          else {
            uVar8 = *(undefined8 *)PTR_DAT_037f8820;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar5 = FUN_02bddb5c(uVar8,0);
            puVar2 = PTR_DAT_037f8230;
            if (lVar4 == lVar5) {
              lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
              if (*(long *)(lVar4 + 0x10) == 0) {
                uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94d0);
                FUN_019b9804(uVar8,0);
                puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                *puVar7 = uVar8;
                thunk_FUN_0188fd20(puVar7,uVar8);
                lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
              }
              plVar9 = (long *)(lVar4 + 0x10);
            }
            else {
              uVar8 = *(undefined8 *)PTR_DAT_037f9550;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar5 = FUN_02bddb5c(uVar8,0);
              puVar2 = PTR_DAT_037f8230;
              if (lVar4 == lVar5) {
                lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                if (*(long *)(lVar4 + 0x40) == 0) {
                  uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9548);
                  FUN_019be028(uVar8,0);
                  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                  *puVar7 = uVar8;
                  thunk_FUN_0188fd20(puVar7,uVar8);
                  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                }
                plVar9 = (long *)(lVar4 + 0x40);
              }
              else {
                uVar8 = *(undefined8 *)PTR_DAT_037f9500;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar5 = FUN_02bddb5c(uVar8,0);
                puVar2 = PTR_DAT_037f8230;
                if (lVar4 == lVar5) {
                  lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                  if (*(long *)(lVar4 + 0x58) == 0) {
                    uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94f8);
                    FUN_019bc344(uVar8,0);
                    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
                    *puVar7 = uVar8;
                    thunk_FUN_0188fd20(puVar7,uVar8);
                    lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                  }
                  plVar9 = (long *)(lVar4 + 0x58);
                }
                else {
                  uVar8 = *(undefined8 *)PTR_DAT_037f94f0;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01843fdc();
                  }
                  lVar5 = FUN_02bddb5c(uVar8,0);
                  puVar2 = PTR_DAT_037f8230;
                  if (lVar4 == lVar5) {
                    lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                    if (*(long *)(lVar4 + 0x60) == 0) {
                      uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f8160);
                      FUN_019bb7f4(uVar8,0);
                      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
                      *puVar7 = uVar8;
                      thunk_FUN_0188fd20(puVar7,uVar8);
                      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                    }
                    plVar9 = (long *)(lVar4 + 0x60);
                  }
                  else {
                    uVar8 = *(undefined8 *)PTR_DAT_037f9110;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                    }
                    lVar5 = FUN_02bddb5c(uVar8,0);
                    puVar2 = PTR_DAT_037f8230;
                    if (lVar4 == lVar5) {
                      lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                      if (*(long *)(lVar4 + 0x18) == 0) {
                        uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9508);
                        FUN_019bc6d8(uVar8,0);
                        puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                        *puVar7 = uVar8;
                        thunk_FUN_0188fd20(puVar7,uVar8);
                        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                      }
                      plVar9 = (long *)(lVar4 + 0x18);
                    }
                    else {
                      uVar8 = *(undefined8 *)PTR_DAT_037f8858;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01843fdc();
                      }
                      lVar5 = FUN_02bddb5c(uVar8,0);
                      puVar2 = PTR_DAT_037f8230;
                      if (lVar4 == lVar5) {
                        lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                        if (*(long *)(lVar4 + 0x68) == 0) {
                          uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f81a0);
                          FUN_019bf2a8(uVar8,0);
                          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
                          *puVar7 = uVar8;
                          thunk_FUN_0188fd20(puVar7,uVar8);
                          lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                        }
                        plVar9 = (long *)(lVar4 + 0x68);
                      }
                      else {
                        uVar8 = *(undefined8 *)PTR_DAT_037f94a8;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01843fdc();
                        }
                        lVar5 = FUN_02bddb5c(uVar8,0);
                        puVar2 = PTR_DAT_037f8230;
                        if (lVar4 == lVar5) {
                          lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                          if (*(long *)(lVar4 + 0x78) == 0) {
                            uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94a0);
                            FUN_019b3af8(uVar8,0);
                            puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                            *puVar7 = uVar8;
                            thunk_FUN_0188fd20(puVar7,uVar8);
                            lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                          }
                          plVar9 = (long *)(lVar4 + 0x78);
                        }
                        else {
                          uVar8 = *(undefined8 *)PTR_DAT_037f8828;
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_01843fdc();
                          }
                          lVar5 = FUN_02bddb5c(uVar8,0);
                          puVar2 = PTR_DAT_037f8230;
                          if (lVar4 == lVar5) {
                            lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                            if (*(long *)(lVar4 + 0x20) == 0) {
                              uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94d8);
                              FUN_019b645c(uVar8,0);
                              puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
                              *puVar7 = uVar8;
                              thunk_FUN_0188fd20(puVar7,uVar8);
                              lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                            }
                            plVar9 = (long *)(lVar4 + 0x20);
                          }
                          else {
                            uVar8 = *(undefined8 *)PTR_DAT_037f8be8;
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_01843fdc();
                            }
                            lVar5 = FUN_02bddb5c(uVar8,0);
                            puVar2 = PTR_DAT_037f8230;
                            if (lVar4 == lVar5) {
                              lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                              if (*(long *)(lVar4 + 0x28) == 0) {
                                uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9510);
                                FUN_019b6778(uVar8,0);
                                puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
                                *puVar7 = uVar8;
                                thunk_FUN_0188fd20(puVar7,uVar8);
                                lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                              }
                              plVar9 = (long *)(lVar4 + 0x28);
                            }
                            else {
                              uVar8 = *(undefined8 *)PTR_DAT_037f8808;
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_01843fdc();
                              }
                              lVar5 = FUN_02bddb5c(uVar8,0);
                              puVar1 = PTR_DAT_037f8230;
                              if (lVar4 != lVar5) {
                                return (long *)0x0;
                              }
                              lVar4 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
                              if (*(long *)(lVar4 + 8) == 0) {
                                uVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94c0);
                                FUN_019b610c(uVar8,0);
                                puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                *puVar7 = uVar8;
                                thunk_FUN_0188fd20(puVar7,uVar8);
                                lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
                              }
                              plVar9 = (long *)(lVar4 + 8);
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
LAB_01b8e048:
  plVar9 = (long *)*plVar9;
  if (plVar9 != (long *)0x0) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar9 + 0x130)) {
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4) {
        return (long *)0x0;
      }
      return plVar9;
    }
  }
  return (long *)0x0;
}


