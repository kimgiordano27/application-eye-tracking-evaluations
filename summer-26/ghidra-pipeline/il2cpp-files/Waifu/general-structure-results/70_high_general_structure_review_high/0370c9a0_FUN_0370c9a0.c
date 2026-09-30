/*
FUNCTION_NAME: FUN_0370c9a0
ENTRY_POINT: 0370c9a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0370c9a0(undefined1 param_1 [16],float param_2,ulong param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  
                    /* catch() { ... } // from try @ 0370c940 with catch @ 0370c9a0 */
                    /* catch() { ... } // from try @ 0370c850 with catch @ 0370c9a4 */
                    /* catch() { ... } // from try @ 0370c81c with catch @ 0370c9a8 */
                    /* catch() { ... } // from try @ 0370c950 with catch @ 0370c9ac */
                    /* catch() { ... } // from try @ 0370c904 with catch @ 0370c9b0 */
                    /* catch() { ... } // from try @ 0370c82c with catch @ 0370c9b4 */
                    /* catch() { ... } // from try @ 0370c7d8 with catch @ 0370c9b8 */
                    /* catch() { ... } // from try @ 0370c754 with catch @ 0370c9bc */
                    /* catch() { ... } // from try @ 0370c870 with catch @ 0370c9c0 */
                    /* catch() { ... } // from try @ 0370c6cc with catch @ 0370c9c4 */
                    /* catch() { ... } // from try @ 0370c6b8 with catch @ 0370c9c8 */
                    /* catch() { ... } // from try @ 0370c664 with catch @ 0370c9cc */
                    /* catch() { ... } // from try @ 0370c988 with catch @ 0370c9d0 */
  if ((DAT_086d8d7a & 1) == 0) {
                    /* catch() { ... } // from try @ 0370c690 with catch @ 0370c9d4 */
    FUN_0335b6c8(&DAT_083e6fe8,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 0370c9ec to 0380ca07 has its CatchHandler @ 0370caac */
    FUN_0335b6c8(&DAT_083e5f50,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 0370ca08 to 0380ca9b has its CatchHandler @ 0370c468 */
    FUN_0335b6c8(&DAT_083e5f58,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e6ff0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e6ff8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5f60,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c580,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbfa0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f1070,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f3520,1);
                    /* try { // try from 0370ca9c to 0380caab has its CatchHandler @ 0370caac */
    DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 0370c9ec with catch @ 0370caac
                       catch() { ... } // from try @ 0370ca9c with catch @ 0370caac */
    FUN_0335b6c8(&DAT_083cf7d8,1);
                    /* try { // try from 0370cab0 to 0380cab3 has its CatchHandler @ 0370cabc */
    DataMemoryBarrier(2,3);
                    /* try { // try from 0370cab4 to 0380cabf has its CatchHandler @ 0370c468 */
                    /* catch() { ... } // from try @ 0370cab0 with catch @ 0370cabc */
    FUN_0335b6c8(&DAT_084146f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084146f8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08414700,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ff958,1);
    DataMemoryBarrier(2,3);
    DAT_086d8d7a = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (long *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (long *)0x0;
  plVar12 = param_4 + 0x1f;
  lVar11 = *plVar12;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(lVar11,0,0);
  if ((uVar6 & 1) == 0) {
    if (param_5 == 0) goto LAB_0370de7c;
    plVar10 = *(long **)(param_5 + 0x58);
    *(undefined1 *)((long)param_4 + 0x154) = 1;
    if (plVar10 == (long *)0x0) goto LAB_0370de7c;
    lVar11 = plVar10[8];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4(lVar11,0,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = plVar10[8];
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a0d2c4(lVar11,param_4,0);
      if ((uVar6 & 1) != 0) {
        plVar7 = (long *)plVar10[8];
        if (plVar7 == (long *)0x0) goto LAB_0370de7c;
        (**(code **)(*plVar7 + 600))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x260));
      }
    }
    lVar11 = plVar10[0xb];
    *plVar12 = lVar11;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar11 = *plVar12;
    }
    if (lVar11 == 0) goto LAB_0370de7c;
    FUN_03733f48(lVar11,param_4,0);
    if (((*(char *)((long)param_4 + 0x5a) != '\0') || (*(char *)((long)param_4 + 100) != '\0')) &&
       (iVar4 = (**(code **)(*plVar10 + 0x2f8))(plVar10,1,1,1,*(undefined8 *)(*plVar10 + 0x300)),
       0 < iVar4)) {
      (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
      if (plVar10[0xc] == 0) goto LAB_0370de7c;
      uStack_c0 = 0;
      local_b8 = (long *)0x0;
      local_c8 = 0;
      FUN_05fd5ad4(&local_c8,plVar10[0xc],
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      while (uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58), (uVar6 & 1) != 0) {
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        (**(code **)(*local_80 + 0x2c8))(local_80,*(undefined8 *)(*local_80 + 0x2d0));
      }
    }
    if (*(char *)((long)param_4 + 0x5c) != '\0') {
      lVar11 = FUN_037326b4(plVar10,0);
      if ((param_4[6] == 0) || (FUN_07a18d2c(param_4[6],0), lVar11 == 0)) goto LAB_0370de7c;
      FUN_07a18dcc(lVar11,0);
    }
    if (*(char *)((long)param_4 + 0x5d) != '\0') {
      lVar11 = FUN_037326b4(plVar10,0);
      if ((param_4[6] == 0) || (FUN_07a172b0(param_4[6],0), lVar11 == 0)) goto LAB_0370de7c;
      FUN_07a1914c(lVar11,0);
    }
    lVar11 = plVar10[5];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4(lVar11,0,0);
    if ((uVar6 & 1) != 0) {
      lVar11 = plVar10[5];
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      if (lVar11 == 0) goto LAB_0370de7c;
      puVar9 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
      FUN_07a84edc(*puVar9,puVar9[1],puVar9[2],lVar11,0);
      lVar11 = plVar10[5];
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      if (lVar11 == 0) goto LAB_0370de7c;
      puVar9 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
      param_2 = (float)puVar9[1];
      param_3 = (ulong)(uint)puVar9[2];
      FUN_07a85014(*puVar9,lVar11,0);
      lVar11 = plVar10[5];
      if (lVar11 == 0) goto LAB_0370de7c;
      if (DAT_086f1e70 == (code *)0x0) {
        DAT_086f1e70 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::get_collisionDetectionMode()");
      }
      uVar5 = (*DAT_086f1e70)(lVar11);
      *(undefined4 *)((long)param_4 + 0x11c) = uVar5;
      if (((char)param_4[0xd] != '\0') && (*(char *)((long)param_4 + 100) == '\0')) {
        lVar11 = plVar10[5];
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086f1e78 == (code *)0x0) {
          DAT_086f1e78 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                             );
        }
        (*DAT_086f1e78)(lVar11,3);
        lVar11 = plVar10[5];
        if (lVar11 == 0) goto LAB_0370de7c;
        lVar13 = param_4[0xd];
        if (DAT_086f1e48 == (code *)0x0) {
          DAT_086f1e48 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_isKinematic(System.Boolean)"
                                             );
        }
        (*DAT_086f1e48)(lVar11,(char)lVar13 != '\0');
      }
      lVar11 = param_4[0xe];
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a0d2c4(lVar11,0,0);
      if ((uVar6 & 1) != 0) {
        lVar11 = param_4[0xe];
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar11 = (*DAT_086ef190)(lVar11);
        if (lVar11 == 0) goto LAB_0370de7c;
        lVar11 = FUN_03fa1ab4(lVar11,DAT_0840c580);
        param_4[0x22] = lVar11;
        plVar12 = param_4 + 0x22;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar11 = *plVar12;
        }
        if (lVar11 == 0) goto LAB_0370de7c;
        lVar13 = plVar10[5];
        if (DAT_086f2138 == (code *)0x0) {
          DAT_086f2138 = (code *)FUN_033d1b68(
                                             "UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)"
                                             );
        }
        (*DAT_086f2138)(lVar11,lVar13);
        lVar11 = param_4[0x22];
        if (lVar11 == 0) goto LAB_0370de7c;
        lVar13 = param_4[0xf];
        if (DAT_086f2158 == (code *)0x0) {
          DAT_086f2158 = (code *)FUN_033d1b68("UnityEngine.Joint::set_breakForce(System.Single)");
        }
        (*DAT_086f2158)((int)lVar13,lVar11);
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_0370de7c;
        lVar13 = param_4[0xf];
        if (DAT_086f2168 == (code *)0x0) {
          DAT_086f2168 = (code *)FUN_033d1b68("UnityEngine.Joint::set_breakTorque(System.Single)");
        }
        (*DAT_086f2168)((int)lVar13,lVar11);
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086f21a8 == (code *)0x0) {
          DAT_086f21a8 = (code *)FUN_033d1b68(
                                             "UnityEngine.Joint::set_connectedMassScale(System.Single)"
                                             );
        }
        (*DAT_086f21a8)(0x3f800000,lVar11);
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086f2198 == (code *)0x0) {
          DAT_086f2198 = (code *)FUN_033d1b68("UnityEngine.Joint::set_massScale(System.Single)");
        }
        (*DAT_086f2198)(0x3f800000,lVar11);
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086f2178 == (code *)0x0) {
          DAT_086f2178 = (code *)FUN_033d1b68(
                                             "UnityEngine.Joint::set_enableCollision(System.Boolean)"
                                             );
        }
        (*DAT_086f2178)(lVar11,0);
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086f2188 == (code *)0x0) {
          DAT_086f2188 = (code *)FUN_033d1b68(
                                             "UnityEngine.Joint::set_enablePreprocessing(System.Boolean)"
                                             );
        }
        (*DAT_086f2188)(lVar11,0);
      }
    }
    (**(code **)(*param_4 + 0x278))(param_4,plVar10,*(undefined8 *)(*param_4 + 0x280));
    if (plVar10[0xc] == 0) goto LAB_0370de7c;
    uStack_c0 = 0;
    local_b8 = (long *)0x0;
    local_c8 = 0;
    FUN_05fd5ad4(&local_c8,plVar10[0xc],
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    local_80 = local_b8;
    while (uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58), plVar12 = local_80, (uVar6 & 1) != 0) {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar11 = local_80[0x47];
      uVar8 = FUN_03398a84(DAT_083cbfa0);
      FUN_0372c1ec(uVar8,param_4,*(undefined8 *)(*param_4 + 0x2d0),0);
      plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
      lVar11 = DAT_083cbfa0;
      plVar12 = plVar12 + 0x47;
      if (plVar7 == (long *)0x0) {
        *plVar12 = 0;
      }
      else {
        if (*plVar7 != DAT_083cbfa0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec();
        }
        *plVar12 = (long)plVar7;
        if (*plVar7 != lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec();
        }
      }
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    lVar11 = plVar10[0x51];
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),param_4,plVar10,*(undefined8 *)(lVar11 + 0x28));
    }
    if (plVar10[0xc] == 0) goto LAB_0370de7c;
    uStack_c0 = 0;
    local_b8 = (long *)0x0;
    local_c8 = 0;
    FUN_05fd5ad4(&local_c8,plVar10[0xc],
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    local_80 = local_b8;
    while (uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58), (uVar6 & 1) != 0) {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar11 = local_80[0x51];
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x18))
                  (*(undefined8 *)(lVar11 + 0x40),param_4,local_80,*(undefined8 *)(lVar11 + 0x28));
      }
    }
    lVar11 = param_4[0x1a];
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),param_4,plVar10,*(undefined8 *)(lVar11 + 0x28));
    }
    if (param_4[0x16] != 0) {
      FUN_054939a0(param_4[0x16],param_4,plVar10,DAT_083ff958);
    }
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar5 = (*DAT_086ef688)();
    *(undefined4 *)(param_4 + 0x23) = uVar5;
    if (*(char *)((long)param_4 + 0x67) != '\0') {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      uVar8 = (*DAT_086ef190)(plVar10);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083cf7d8);
      }
      FUN_07a125b0(uVar8,0);
      return;
    }
    if (*(char *)((long)param_4 + 0x5b) != '\0') {
      lVar11 = FUN_037326b4(plVar10,0);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar8 = (*DAT_086ef188)(param_4);
      if (lVar11 == 0) goto LAB_0370de7c;
      FUN_07a198f4(lVar11,uVar8,0);
    }
    if (*(char *)((long)param_4 + 100) != '\0') {
      FUN_037342b8(plVar10,0);
    }
    if (*(char *)((long)param_4 + 0x66) != '\0') {
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
      (*DAT_086ef168)(param_4,0);
    }
    if ((*(char *)((long)param_4 + 0x65) != '\0') || (*(char *)((long)param_4 + 0x66) != '\0')) {
      *(undefined1 *)(plVar10 + 7) = 0;
    }
    if (*(char *)((long)param_4 + 0x5e) != '\0') {
      lVar11 = plVar10[0x46];
      plVar12 = plVar10 + 0x46;
      uVar8 = FUN_03398a84(DAT_083cbfa0);
      FUN_0372c1ec(uVar8,param_4,DAT_08414700,0);
      plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
      lVar11 = DAT_083cbfa0;
      if (plVar7 == (long *)0x0) {
        *plVar12 = 0;
      }
      else if ((*plVar7 != DAT_083cbfa0) || (*plVar12 = (long)plVar7, *plVar7 != lVar11))
      goto LAB_0370db30;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar10[0xc] == 0) goto LAB_0370de7c;
      uStack_c0 = 0;
      local_b8 = (long *)0x0;
      local_c8 = 0;
      FUN_05fd5ad4(&local_c8,plVar10[0xc],
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      while (uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58), plVar12 = local_80, (uVar6 & 1) != 0) {
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar11 = local_80[0x46];
        uVar8 = FUN_03398a84(DAT_083cbfa0);
        FUN_0372c1ec(uVar8,param_4,DAT_08414700,0);
        plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
        lVar11 = DAT_083cbfa0;
        plVar12 = plVar12 + 0x46;
        if (plVar7 == (long *)0x0) {
          *plVar12 = 0;
        }
        else {
          if (*plVar7 != DAT_083cbfa0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
          *plVar12 = (long)plVar7;
          if (*plVar7 != lVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
        }
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      lVar11 = plVar10[0x47];
      plVar12 = plVar10 + 0x47;
      uVar8 = FUN_03398a84(DAT_083cbfa0);
      FUN_0372c1ec(uVar8,param_4,DAT_084146f0,0);
      plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
      lVar11 = DAT_083cbfa0;
      if (plVar7 == (long *)0x0) {
        *plVar12 = 0;
      }
      else if ((*plVar7 != DAT_083cbfa0) || (*plVar12 = (long)plVar7, *plVar7 != lVar11))
      goto LAB_0370db30;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((plVar10[0xb] == 0) || (lVar11 = *(long *)(plVar10[0xb] + 0x60), lVar11 == 0))
      goto LAB_0370de7c;
      uStack_c0 = 0;
      local_b8 = (long *)0x0;
      local_c8 = 0;
      FUN_05fd5ad4(&local_c8,lVar11,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      while( true ) {
        uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58);
        plVar12 = local_80;
        fVar16 = (float)param_3;
        if ((uVar6 & 1) == 0) break;
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar11 = local_80[0x47];
        uVar8 = FUN_03398a84(DAT_083cbfa0);
        FUN_0372c1ec(uVar8,param_4,DAT_084146f0,0);
        plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
        lVar11 = DAT_083cbfa0;
        plVar12 = plVar12 + 0x47;
        if (plVar7 == (long *)0x0) {
          *plVar12 = 0;
        }
        else {
          if (*plVar7 != DAT_083cbfa0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
          *plVar12 = (long)plVar7;
          if (*plVar7 != lVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
        }
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      lVar11 = FUN_037326b4(plVar10,0);
      if (lVar11 == 0) goto LAB_0370de7c;
      uVar5 = FUN_07a19780(lVar11,0);
      *(undefined4 *)(param_4 + 0x29) = uVar5;
      *(float *)((long)param_4 + 0x14c) = param_2;
      *(float *)(param_4 + 0x2a) = fVar16;
      *(undefined1 *)((long)param_4 + 0x144) = *(undefined1 *)((long)plVar10 + 0x18d);
      *(undefined1 *)((long)plVar10 + 0x18d) = 1;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)(param_4);
      if (lVar11 == 0) goto LAB_0370de7c;
      fVar14 = (float)FUN_07a1bb0c(lVar11,0);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)(param_4);
      if (lVar11 == 0) goto LAB_0370de7c;
      FUN_07a1bb0c(lVar11,0);
      fVar17 = param_2;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)(param_4);
      if (lVar11 == 0) goto LAB_0370de7c;
      fVar15 = (float)FUN_07a1bb0c(lVar11,0);
      if (param_2 <= fVar14) {
        fVar15 = fVar17;
      }
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)(param_4);
      if (lVar11 == 0) goto LAB_0370de7c;
      fVar15 = ABS(fVar15);
      FUN_07a1bb0c(lVar11,0);
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar11 = (*DAT_086ef188)(param_4);
        if (lVar11 == 0) goto LAB_0370de7c;
        FUN_07a1bb0c(lVar11,0);
      }
      fVar15 = ABS(fVar15);
      if ((int)param_4[7] == 1) {
        lVar11 = FUN_037326b4(plVar10,0);
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        uVar8 = (*DAT_086ef190)(lVar11);
        fVar17 = *(float *)(param_4 + 0xc);
        fVar16 = (float)param_4[8];
        fVar14 = (float)((ulong)param_4[8] >> 0x20);
        fVar14 = (fVar14 + fVar14 * fVar17) * fVar15;
        FUN_0370e090(CONCAT44(fVar14,(fVar16 + fVar16 * fVar17) * fVar15),fVar14,
                     fVar15 * (*(float *)(param_4 + 9) + *(float *)(param_4 + 9) * fVar17),param_4,
                     uVar8);
      }
      else if ((int)param_4[7] == 0) {
        lVar11 = FUN_037326b4(plVar10,0);
        if (lVar11 == 0) goto LAB_0370de7c;
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        uVar8 = (*DAT_086ef190)(lVar11);
        FUN_0370de9c(fVar15 * *(float *)((long)param_4 + 0x3c) + fVar15 * *(float *)(param_4 + 0xc),
                     param_4,uVar8);
      }
    }
    if ((char)param_4[0xb] != '\0') {
      lVar11 = plVar10[0x46];
      plVar12 = plVar10 + 0x46;
      uVar8 = FUN_03398a84(DAT_083cbfa0);
      FUN_0372c1ec(uVar8,param_4,DAT_084146f8,0);
      plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
      lVar11 = DAT_083cbfa0;
      if (plVar7 == (long *)0x0) {
        *plVar12 = 0;
      }
      else if ((*plVar7 != DAT_083cbfa0) || (*plVar12 = (long)plVar7, *plVar7 != lVar11)) {
LAB_0370db30:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec();
      }
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar10[0xc] == 0) goto LAB_0370de7c;
      uStack_c0 = 0;
      local_b8 = (long *)0x0;
      local_c8 = 0;
      FUN_05fd5ad4(&local_c8,plVar10[0xc],
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      while (uVar6 = FUN_05fd5b44(&local_90,DAT_083e5f58), plVar12 = local_80, (uVar6 & 1) != 0) {
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar11 = local_80[0x46];
        uVar8 = FUN_03398a84(DAT_083cbfa0);
        FUN_0372c1ec(uVar8,param_4,DAT_084146f8,0);
        plVar7 = (long *)FUN_0687a9b0(lVar11,uVar8,0);
        lVar11 = DAT_083cbfa0;
        plVar12 = plVar12 + 0x46;
        if (plVar7 == (long *)0x0) {
          *plVar12 = 0;
        }
        else {
          if (*plVar7 != DAT_083cbfa0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
          *plVar12 = (long)plVar7;
          if (*plVar7 != lVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec();
          }
        }
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
    }
    lVar11 = param_4[0x21];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a0d2c4(lVar11,0,0);
    if ((uVar6 & 1) != 0) {
      if (plVar10[9] == 0) {
LAB_0370de7c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uStack_c0 = 0;
      local_b8 = (long *)0x0;
      local_c8 = 0;
      FUN_05fd5ad4(&local_c8,plVar10[9],
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f3520 + 0x20) + 0xc0) + 0x138));
      uStack_a8 = uStack_c0;
      local_b0 = local_c8;
      local_a0 = local_b8;
      while (uVar6 = FUN_05fd5b44(&local_b0,DAT_083e6ff0), plVar12 = local_a0, (uVar6 & 1) != 0) {
        if (param_4[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        FUN_03701bb8(param_4[0x21],local_a0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        (**(code **)(*plVar12 + 0x288))(plVar12,*(undefined8 *)(*plVar12 + 0x290));
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
        (*DAT_086ef168)(plVar12,0);
        lVar11 = plVar12[0x1f];
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_07a0d2c4(lVar11,0,0);
        if ((uVar6 & 1) != 0) {
          lVar11 = plVar12[0x1f];
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (DAT_086ef168 == (code *)0x0) {
            DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                               );
          }
          (*DAT_086ef168)(lVar11,0);
        }
      }
      if ((*(char *)((long)param_4 + 100) != '\0') && (*(char *)((long)param_4 + 0x5b) != '\0')) {
        if (param_4[0x21] == 0) goto LAB_0370de7c;
        FUN_0373611c(param_4[0x21],plVar10,0);
      }
    }
  }
  return;
}


