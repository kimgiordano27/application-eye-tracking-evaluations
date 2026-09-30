/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 0747386c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__GetPosition(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  uint in_w8;
  uint uVar10;
  long in_x9;
  undefined8 uVar11;
  undefined8 in_x10;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar11 = **(undefined8 **)(in_x9 + 0x750);
  *(undefined8 *)(param_1 + 0x1468) = in_x10;
  *(undefined8 *)(param_1 + 0x1460) = uVar11;
  if (in_w8 != 0x145) {
    uVar11 = *(undefined8 *)PTR_DAT_08fa01c8;
    *(undefined8 *)(param_1 + 0x1478) = 0xfde9;
    *(undefined8 *)(param_1 + 0x1470) = uVar11;
    if (0x146 < in_w8) {
      uVar11 = *(undefined8 *)PTR_DAT_08fa01e0;
      *(undefined8 *)(param_1 + 0x1488) = 65000;
      *(undefined8 *)(param_1 + 0x1480) = uVar11;
      if (in_w8 != 0x147) {
        uVar11 = *(undefined8 *)PTR_DAT_08fa05c8;
        *(undefined8 *)(param_1 + 0x1498) = 0xfde9;
        *(undefined8 *)(param_1 + 0x1490) = uVar11;
        if (0x148 < in_w8) {
          uVar11 = *(undefined8 *)PTR_DAT_08fa0428;
          *(undefined8 *)(param_1 + 0x14a8) = 0x4b1;
          *(undefined8 *)(param_1 + 0x14a0) = uVar11;
          if (in_w8 != 0x149) {
            uVar11 = *(undefined8 *)PTR_DAT_08f6e408;
            *(undefined8 *)(param_1 + 0x14b8) = 0x4e9f;
            *(undefined8 *)(param_1 + 0x14b0) = uVar11;
            if (0x14a < in_w8) {
              uVar11 = *(undefined8 *)PTR_DAT_08fa07e8;
              *(undefined8 *)(param_1 + 0x14c8) = 0x4e9f;
              *(undefined8 *)(param_1 + 0x14c0) = uVar11;
              if (in_w8 != 0x14b) {
                uVar11 = *(undefined8 *)PTR_DAT_08fa0240;
                *(undefined8 *)(param_1 + 0x14d8) = 0x4b0;
                *(undefined8 *)(param_1 + 0x14d0) = uVar11;
                if (0x14c < in_w8) {
                  uVar11 = *(undefined8 *)PTR_DAT_08fa0868;
                  *(undefined8 *)(param_1 + 0x14e8) = 0x4b1;
                  *(undefined8 *)(param_1 + 0x14e0) = uVar11;
                  if (in_w8 != 0x14d) {
                    uVar11 = *(undefined8 *)PTR_DAT_08fa0bd0;
                    *(undefined8 *)(param_1 + 0x14f8) = 0x4b0;
                    *(undefined8 *)(param_1 + 0x14f0) = uVar11;
                    if (0x14e < in_w8) {
                      uVar11 = *(undefined8 *)PTR_DAT_08fa0a68;
                      *(undefined8 *)(param_1 + 0x1508) = 12000;
                      *(undefined8 *)(param_1 + 0x1500) = uVar11;
                      if (in_w8 != 0x14f) {
                        uVar11 = *(undefined8 *)PTR_DAT_08fa0a78;
                        *(undefined8 *)(param_1 + 0x1518) = 0x2ee1;
                        *(undefined8 *)(param_1 + 0x1510) = uVar11;
                        if (0x150 < in_w8) {
                          uVar11 = *(undefined8 *)PTR_DAT_08fa0b90;
                          *(undefined8 *)(param_1 + 0x1528) = 12000;
                          *(undefined8 *)(param_1 + 0x1520) = uVar11;
                          if (in_w8 != 0x151) {
                            uVar11 = *(undefined8 *)PTR_DAT_08fa0480;
                            *(undefined8 *)(param_1 + 0x1538) = 65000;
                            *(undefined8 *)(param_1 + 0x1530) = uVar11;
                            if (0x152 < in_w8) {
                              uVar11 = *(undefined8 *)PTR_DAT_08fa08c0;
                              *(undefined8 *)(param_1 + 0x1548) = 0xfde9;
                              *(undefined8 *)(param_1 + 0x1540) = uVar11;
                              if (in_w8 != 0x153) {
                                uVar11 = *(undefined8 *)PTR_DAT_08fa0980;
                                *(undefined8 *)(param_1 + 0x1558) = 0x6fb6;
                                *(undefined8 *)(param_1 + 0x1550) = uVar11;
                                if (0x154 < in_w8) {
                                  uVar11 = *(undefined8 *)PTR_DAT_08fa0720;
                                  *(undefined8 *)(param_1 + 0x1568) = 0x4e2;
                                  *(undefined8 *)(param_1 + 0x1560) = uVar11;
                                  if (in_w8 != 0x155) {
                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0b80;
                                    *(undefined8 *)(param_1 + 0x1578) = 0x4e3;
                                    *(undefined8 *)(param_1 + 0x1570) = uVar11;
                                    if (0x156 < in_w8) {
                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0850;
                                      *(undefined8 *)(param_1 + 0x1588) = 0x4e4;
                                      *(undefined8 *)(param_1 + 0x1580) = uVar11;
                                      if (in_w8 != 0x157) {
                                        uVar11 = *(undefined8 *)PTR_DAT_08fa07d8;
                                        *(undefined8 *)(param_1 + 0x1598) = 0x4e5;
                                        *(undefined8 *)(param_1 + 0x1590) = uVar11;
                                        if (0x158 < in_w8) {
                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0ba0;
                                          *(undefined8 *)(param_1 + 0x15a8) = 0x4e6;
                                          *(undefined8 *)(param_1 + 0x15a0) = uVar11;
                                          if (in_w8 != 0x159) {
                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0378;
                                            *(undefined8 *)(param_1 + 0x15b8) = 0x4e7;
                                            *(undefined8 *)(param_1 + 0x15b0) = uVar11;
                                            if (0x15a < in_w8) {
                                              uVar11 = *(undefined8 *)PTR_DAT_08fa0568;
                                              *(undefined8 *)(param_1 + 0x15c8) = 0x4e8;
                                              *(undefined8 *)(param_1 + 0x15c0) = uVar11;
                                              if (in_w8 != 0x15b) {
                                                uVar11 = *(undefined8 *)PTR_DAT_08fa0528;
                                                *(undefined8 *)(param_1 + 0x15d8) = 0x4e9;
                                                *(undefined8 *)(param_1 + 0x15d0) = uVar11;
                                                if (0x15c < in_w8) {
                                                  uVar11 = *(undefined8 *)PTR_DAT_08f9ffd8;
                                                  *(undefined8 *)(param_1 + 0x15e8) = 0x4ea;
                                                  *(undefined8 *)(param_1 + 0x15e0) = uVar11;
                                                  if (in_w8 != 0x15d) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa07c8;
                                                    *(undefined8 *)(param_1 + 0x15f8) = 0x36a;
                                                    *(undefined8 *)(param_1 + 0x15f0) = uVar11;
                                                    if (0x15e < in_w8) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0c00;
                                                      *(undefined8 *)(param_1 + 0x1608) = 0x4e4;
                                                      *(undefined8 *)(param_1 + 0x1600) = uVar11;
                                                      if (in_w8 != 0x15f) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0490;
                                                        *(undefined8 *)(param_1 + 0x1618) = 20000;
                                                        *(undefined8 *)(param_1 + 0x1610) = uVar11;
                                                        if (0x160 < in_w8) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0a70;
                                                          *(undefined8 *)(param_1 + 0x1628) = 0x4e22
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1620) = uVar11
                                                          ;
                                                          if (in_w8 != 0x161) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa00d8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1638) =
                                                                 0x4e2;
                                                            *(undefined8 *)(param_1 + 0x1630) =
                                                                 uVar11;
                                                            if (0x162 < in_w8) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa06a8;
                                                              *(undefined8 *)(param_1 + 0x1648) =
                                                                   0x4e3;
                                                              *(undefined8 *)(param_1 + 0x1640) =
                                                                   uVar11;
                                                              if (in_w8 != 0x163) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0220;
                                                                *(undefined8 *)(param_1 + 0x1658) =
                                                                     0x4e21;
                                                                *(undefined8 *)(param_1 + 0x1650) =
                                                                     uVar11;
                                                                if (0x164 < in_w8) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa0830;
                                                                  *(undefined8 *)(param_1 + 0x1668)
                                                                       = 0x4e23;
                                                                  *(undefined8 *)(param_1 + 0x1660)
                                                                       = uVar11;
                                                                  if (in_w8 != 0x165) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0690;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1678) = 0x4e24;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1670) = uVar11;
                                                                    if (0x166 < in_w8) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0160;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1688) = 0x4e25;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1680) = uVar11;
                                                                      if (in_w8 != 0x167) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa03d8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1698) = 0x4f25
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1690) = uVar11
                                                                        ;
                                                                        if (0x168 < in_w8) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0ba8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x16a8) =
                                                                               0x4f2d;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x16a0) =
                                                                               uVar11;
                                                                          if (in_w8 != 0x169) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa04f0;
                                                  *(undefined8 *)(param_1 + 0x16b8) = 0x51c8;
                                                  *(undefined8 *)(param_1 + 0x16b0) = uVar11;
                                                  if (0x16a < in_w8) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08f9fff8;
                                                    *(undefined8 *)(param_1 + 0x16c8) = 0x51d5;
                                                    *(undefined8 *)(param_1 + 0x16c0) = uVar11;
                                                    if (in_w8 != 0x16b) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08f9ffc8;
                                                      *(undefined8 *)(param_1 + 0x16d8) = 0xc433;
                                                      *(undefined8 *)(param_1 + 0x16d0) = uVar11;
                                                      if (0x16c < in_w8) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0710;
                                                        *(undefined8 *)(param_1 + 0x16e8) = 0x5161;
                                                        *(undefined8 *)(param_1 + 0x16e0) = uVar11;
                                                        if (in_w8 != 0x16d) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0088;
                                                          *(undefined8 *)(param_1 + 0x16f8) = 0xcadc
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x16f0) = uVar11
                                                          ;
                                                          if (0x16e < in_w8) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0aa8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1708) =
                                                                 0xcae0;
                                                            *(undefined8 *)(param_1 + 0x1700) =
                                                                 uVar11;
                                                            if (in_w8 != 0x16f) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0b40;
                                                              *(undefined8 *)(param_1 + 0x1718) =
                                                                   0xcadc;
                                                              *(undefined8 *)(param_1 + 0x1710) =
                                                                   uVar11;
                                                              if (0x170 < in_w8) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0a90;
                                                                *(undefined8 *)(param_1 + 0x1728) =
                                                                     0x7149;
                                                                *(undefined8 *)(param_1 + 0x1720) =
                                                                     uVar11;
                                                                if (in_w8 != 0x171) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08f9ff70;
                                                                  *(undefined8 *)(param_1 + 0x1738)
                                                                       = 0x4e89;
                                                                  *(undefined8 *)(param_1 + 0x1730)
                                                                       = uVar11;
                                                                  if (0x172 < in_w8) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa02a8;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1748) = 0x4e8a;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1740) = uVar11;
                                                                    if (in_w8 != 0x173) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0a38;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1758) = 0x4e8c;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1750) = uVar11;
                                                                      if (0x174 < in_w8) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa09e8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1768) = 0x4e8b
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1760) = uVar11
                                                                        ;
                                                                        if (in_w8 != 0x175) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0318
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1778) =
                                                                               0xdeae;
                                                                          *(undefined8 *)
                                                                           (param_1 + 6000) = uVar11
                                                                          ;
                                                                          if (0x176 < in_w8) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa0018;
                                                  *(undefined8 *)(param_1 + 0x1788) = 0xdeab;
                                                  *(undefined8 *)(param_1 + 0x1780) = uVar11;
                                                  if (in_w8 != 0x177) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0570;
                                                    *(undefined8 *)(param_1 + 0x1798) = 0xdeaa;
                                                    *(undefined8 *)(param_1 + 0x1790) = uVar11;
                                                    if (0x178 < in_w8) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08f9ffe8;
                                                      *(undefined8 *)(param_1 + 0x17a8) = 0xdeb2;
                                                      *(undefined8 *)(param_1 + 0x17a0) = uVar11;
                                                      if (in_w8 != 0x179) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0218;
                                                        *(undefined8 *)(param_1 + 0x17b8) = 0xdeb0;
                                                        *(undefined8 *)(param_1 + 0x17b0) = uVar11;
                                                        if (0x17a < in_w8) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0b18;
                                                          *(undefined8 *)(param_1 + 0x17c8) = 0xdeb1
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x17c0) = uVar11
                                                          ;
                                                          if (in_w8 != 0x17b) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0760
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x17d8) =
                                                                 0xdeaf;
                                                            *(undefined8 *)(param_1 + 0x17d0) =
                                                                 uVar11;
                                                            if (0x17c < in_w8) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0958;
                                                              *(undefined8 *)(param_1 + 0x17e8) =
                                                                   0xdeb3;
                                                              *(undefined8 *)(param_1 + 0x17e0) =
                                                                   uVar11;
                                                              if (in_w8 != 0x17d) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa07a8;
                                                                *(undefined8 *)(param_1 + 0x17f8) =
                                                                     0xdeac;
                                                                *(undefined8 *)(param_1 + 0x17f0) =
                                                                     uVar11;
                                                                if (0x17e < in_w8) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa08d8;
                                                                  *(undefined8 *)(param_1 + 0x1808)
                                                                       = 0xdead;
                                                                  *(undefined8 *)(param_1 + 0x1800)
                                                                       = uVar11;
                                                                  if (in_w8 != 0x17f) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0488;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1818) = 0x2714;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1810) = uVar11;
                                                                    if (0x180 < in_w8) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa04d8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1828) = 0x272d;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1820) = uVar11;
                                                                      if (in_w8 != 0x181) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0298;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1838) = 0x2718
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1830) = uVar11
                                                                        ;
                                                                        if (0x182 < in_w8) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa08d0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1848) =
                                                                               0x2712;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1840) =
                                                                               uVar11;
                                                                          if (in_w8 != 0x183) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa0078;
                                                  *(undefined8 *)(param_1 + 0x1858) = 0x2762;
                                                  *(undefined8 *)(param_1 + 0x1850) = uVar11;
                                                  if (0x184 < in_w8) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa00e8;
                                                    *(undefined8 *)(param_1 + 0x1868) = 0x2717;
                                                    *(undefined8 *)(param_1 + 0x1860) = uVar11;
                                                    if (in_w8 != 0x185) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0068;
                                                      *(undefined8 *)(param_1 + 0x1878) = 0x2716;
                                                      *(undefined8 *)(param_1 + 0x1870) = uVar11;
                                                      if (0x186 < in_w8) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa06f0;
                                                        *(undefined8 *)(param_1 + 0x1888) = 0x2715;
                                                        *(undefined8 *)(param_1 + 0x1880) = uVar11;
                                                        if (in_w8 != 0x187) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0600;
                                                          *(undefined8 *)(param_1 + 0x1898) = 0x275f
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1890) = uVar11
                                                          ;
                                                          if (0x188 < in_w8) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa06c0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x18a8) =
                                                                 0x2711;
                                                            *(undefined8 *)(param_1 + 0x18a0) =
                                                                 uVar11;
                                                            if (in_w8 != 0x189) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa08b0;
                                                              *(undefined8 *)(param_1 + 0x18b8) =
                                                                   0x2713;
                                                              *(undefined8 *)(param_1 + 0x18b0) =
                                                                   uVar11;
                                                              if (0x18a < in_w8) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa06e0;
                                                                *(undefined8 *)(param_1 + 0x18c8) =
                                                                     0x271a;
                                                                *(undefined8 *)(param_1 + 0x18c0) =
                                                                     uVar11;
                                                                if (in_w8 != 0x18b) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa0270;
                                                                  *(undefined8 *)(param_1 + 0x18d8)
                                                                       = 0x2725;
                                                                  *(undefined8 *)(param_1 + 0x18d0)
                                                                       = uVar11;
                                                                  if (0x18c < in_w8) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa08a8;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x18e8) = 0x2761;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x18e0) = uVar11;
                                                                    if (in_w8 != 0x18d) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0640;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x18f8) = 0x2721;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x18f0) = uVar11;
                                                                      if (0x18e < in_w8) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0898;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1908) = 0x3a4;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1900) = uVar11
                                                                        ;
                                                                        if (in_w8 != 399) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa01d0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1918) =
                                                                               0x3a4;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1910) =
                                                                               uVar11;
                                                                          if (400 < in_w8) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa05f0;
                                                  *(undefined8 *)(param_1 + 0x1928) = 65000;
                                                  *(undefined8 *)(param_1 + 0x1920) = uVar11;
                                                  if (in_w8 != 0x191) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0c40;
                                                    *(undefined8 *)(param_1 + 0x1938) = 0xfde9;
                                                    *(undefined8 *)(param_1 + 0x1930) = uVar11;
                                                    if (0x192 < in_w8) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0730;
                                                      *(undefined8 *)(param_1 + 0x1948) = 65000;
                                                      *(undefined8 *)(param_1 + 0x1940) = uVar11;
                                                      if (in_w8 != 0x193) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa04a0;
                                                        *(undefined8 *)(param_1 + 0x1958) = 0xfde9;
                                                        *(undefined8 *)(param_1 + 0x1950) = uVar11;
                                                        puVar4 = PTR_DAT_08f99d88;
                                                        if (0x194 < in_w8) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0af8;
                                                          *(undefined8 *)(param_1 + 0x1968) = 0x3b6;
                                                          *(undefined8 *)(param_1 + 0x1960) = uVar11
                                                          ;
                                                          puVar3 = PTR_DAT_08f9ff60;
                                                          **(long **)(*(long *)puVar4 + 0xb8) =
                                                               param_1;
                                                          lVar9 = FUN_040316d0(*(undefined8 *)puVar3
                                                                               ,0x62);
                                                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                                            FUN_0403188c();
                                                          }
                                                          uVar10 = (uint)*(ulong *)(lVar9 + 0x18);
                                                          if (uVar10 != 0) {
                                                            uVar11 = *unaff_x26;
                                                            *(undefined8 *)(lVar9 + 0x20) =
                                                                 0x4e40025;
                                                            *(undefined8 *)(lVar9 + 0x28) = uVar11;
                                                            if (uVar10 != 1) {
                                                              uVar11 = *unaff_x21;
                                                              *(undefined8 *)(lVar9 + 0x30) =
                                                                   0x4e401b5;
                                                              *(undefined8 *)(lVar9 + 0x38) = uVar11
                                                              ;
                                                              if (2 < uVar10) {
                                                                uVar11 = *unaff_x24;
                                                                *(undefined8 *)(lVar9 + 0x40) =
                                                                     0x4e401f4;
                                                                *(undefined8 *)(lVar9 + 0x48) =
                                                                     uVar11;
                                                                if (uVar10 != 3) {
                                                                  uVar11 = *unaff_x28;
                                                                  *(undefined8 *)(lVar9 + 0x50) =
                                                                       0x20204e802c4;
                                                                  *(undefined8 *)(lVar9 + 0x58) =
                                                                       uVar11;
                                                                  if (4 < uVar10) {
                                                                    uVar11 = *unaff_x23;
                                                                    *(undefined8 *)(lVar9 + 0x60) =
                                                                         0x4e502e1;
                                                                    *(undefined8 *)(lVar9 + 0x68) =
                                                                         uVar11;
                                                                    if (uVar10 != 5) {
                                                                      uVar11 = *unaff_x22;
                                                                      *(undefined8 *)(lVar9 + 0x70)
                                                                           = 0x4e90307;
                                                                      *(undefined8 *)(lVar9 + 0x78)
                                                                           = uVar11;
                                                                      if (6 < uVar10) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0310;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x80) = 0x4e40352;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x88) = uVar11;
                                                                        if (uVar10 != 7) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0508
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x90) =
                                                                               0x20204e20354;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x98) = uVar11;
                                                                          if (8 < uVar10) {
                                                                            uVar11 = *unaff_x27;
                                                                            *(undefined8 *)
                                                                             (lVar9 + 0xa0) =
                                                                                 0x4e40357;
                                                                            *(undefined8 *)
                                                                             (lVar9 + 0xa8) = uVar11
                                                                            ;
                                                                            if (uVar10 != 9) {
                                                                              uVar11 = *(undefined8
                                                                                         *)
                                                  PTR_DAT_08fa02d0;
                                                  *(undefined8 *)(lVar9 + 0xb0) = 0x4e60359;
                                                  *(undefined8 *)(lVar9 + 0xb8) = uVar11;
                                                  if (10 < uVar10) {
                                                    uVar11 = *unaff_x25;
                                                    *(undefined8 *)(lVar9 + 0xc0) = 0x4e4035a;
                                                    *(undefined8 *)(lVar9 + 200) = uVar11;
                                                    if (uVar10 != 0xb) {
                                                      uVar11 = *unaff_x20;
                                                      *(undefined8 *)(lVar9 + 0xd0) = 0x4e4035c;
                                                      *(undefined8 *)(lVar9 + 0xd8) = uVar11;
                                                      if (0xc < uVar10) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0520;
                                                        *(undefined8 *)(lVar9 + 0xe0) = 0x4e4035d;
                                                        *(undefined8 *)(lVar9 + 0xe8) = uVar11;
                                                        if (uVar10 != 0xd) {
                                                          uVar11 = *unaff_x29;
                                                          *(undefined8 *)(lVar9 + 0xf0) =
                                                               0x20204e7035e;
                                                          *(undefined8 *)(lVar9 + 0xf8) = uVar11;
                                                          if (0xe < uVar10) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0b70
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x100) =
                                                                 0x4e4035f;
                                                            *(undefined8 *)(lVar9 + 0x108) = uVar11;
                                                            puVar3 = PTR_DAT_08fa0bd8;
                                                            if (uVar10 != 0xf) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0048;
                                                              *(undefined8 *)(lVar9 + 0x110) =
                                                                   0x4e80360;
                                                              *(undefined8 *)(lVar9 + 0x118) =
                                                                   uVar11;
                                                              if (0x10 < uVar10) {
                                                                uVar11 = *(undefined8 *)puVar3;
                                                                *(undefined8 *)(lVar9 + 0x120) =
                                                                     0x4e40361;
                                                                *(undefined8 *)(lVar9 + 0x128) =
                                                                     uVar11;
                                                                if (uVar10 != 0x11) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa0420;
                                                                  *(undefined8 *)(lVar9 + 0x130) =
                                                                       0x20204e30362;
                                                                  *(undefined8 *)(lVar9 + 0x138) =
                                                                       uVar11;
                                                                  puVar3 = PTR_DAT_08fa04e8;
                                                                  if (0x12 < uVar10) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa00c8;
                                                                    *(undefined8 *)(lVar9 + 0x140) =
                                                                         0x4e50365;
                                                                    *(undefined8 *)(lVar9 + 0x148) =
                                                                         uVar11;
                                                                    if (uVar10 != 0x13) {
                                                                      uVar11 = *(undefined8 *)puVar3
                                                                      ;
                                                                      *(undefined8 *)(lVar9 + 0x150)
                                                                           = 0x4e20366;
                                                                      *(undefined8 *)(lVar9 + 0x158)
                                                                           = uVar11;
                                                                      if (0x14 < uVar10) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa07c8;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x160) =
                                                                             0x303036a036a;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x168) = uVar11;
                                                                        puVar2 = PTR_DAT_08fa0b78;
                                                                        puVar3 = PTR_DAT_08fa0118;
                                                                        if (uVar10 != 0x15) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0778
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x170) =
                                                                               0x4e5036b;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x178) = uVar11;
                                                                          if (0x16 < uVar10) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa0b38;
                                                  *(undefined8 *)(lVar9 + 0x180) = 0x30303a403a4;
                                                  *(undefined8 *)(lVar9 + 0x188) = uVar11;
                                                  if (uVar10 != 0x17) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0550;
                                                    *(undefined8 *)(lVar9 + 400) = 0x30303a803a8;
                                                    *(undefined8 *)(lVar9 + 0x198) = uVar11;
                                                    if (0x18 < uVar10) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0178;
                                                      *(undefined8 *)(lVar9 + 0x1a0) = 0x30303b503b5
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x1a8) = uVar11;
                                                      if (uVar10 != 0x19) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0408;
                                                        *(undefined8 *)(lVar9 + 0x1b0) =
                                                             0x30303b603b6;
                                                        *(undefined8 *)(lVar9 + 0x1b8) = uVar11;
                                                        if (0x1a < uVar10) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0708;
                                                          *(undefined8 *)(lVar9 + 0x1c0) = 0x4e60402
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x1c8) = uVar11;
                                                          if (uVar10 != 0x1b) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08f9ff68
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x1d0) =
                                                                 0x4e40417;
                                                            *(undefined8 *)(lVar9 + 0x1d8) = uVar11;
                                                            if (0x1c < uVar10) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0080;
                                                              *(undefined8 *)(lVar9 + 0x1e0) =
                                                                   0x4e40474;
                                                              *(undefined8 *)(lVar9 + 0x1e8) =
                                                                   uVar11;
                                                              if (uVar10 != 0x1d) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0700;
                                                                *(undefined8 *)(lVar9 + 0x1f0) =
                                                                     0x4e40475;
                                                                *(undefined8 *)(lVar9 + 0x1f8) =
                                                                     uVar11;
                                                                if (0x1e < uVar10) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08f9ff90;
                                                                  *(undefined8 *)(lVar9 + 0x200) =
                                                                       0x4e40476;
                                                                  *(undefined8 *)(lVar9 + 0x208) =
                                                                       uVar11;
                                                                  if (uVar10 != 0x1f) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0880;
                                                                    *(undefined8 *)(lVar9 + 0x210) =
                                                                         0x4e40477;
                                                                    *(undefined8 *)(lVar9 + 0x218) =
                                                                         uVar11;
                                                                    if (0x20 < uVar10) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0928;
                                                                      *(undefined8 *)(lVar9 + 0x220)
                                                                           = 0x4e40478;
                                                                      *(undefined8 *)(lVar9 + 0x228)
                                                                           = uVar11;
                                                                      if (uVar10 != 0x21) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0228;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x230) = 0x4e40479
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x238) = uVar11;
                                                                        puVar5 = PTR_DAT_08fa0c10;
                                                                        if (0x22 < uVar10) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0328
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x240) =
                                                                               0x4e4047a;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x248) = uVar11;
                                                                          if (uVar10 != 0x23) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa07c0;
                                                  *(undefined8 *)(lVar9 + 0x250) = 0x4e4047b;
                                                  *(undefined8 *)(lVar9 + 600) = uVar11;
                                                  if (0x24 < uVar10) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0738;
                                                    *(undefined8 *)(lVar9 + 0x260) = 0x4e4047c;
                                                    *(undefined8 *)(lVar9 + 0x268) = uVar11;
                                                    if (uVar10 != 0x25) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0c08;
                                                      *(undefined8 *)(lVar9 + 0x270) = 0x4e4047d;
                                                      *(undefined8 *)(lVar9 + 0x278) = uVar11;
                                                      if (0x26 < uVar10) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0240;
                                                        *(undefined8 *)(lVar9 + 0x280) =
                                                             0x20004b004b0;
                                                        *(undefined8 *)(lVar9 + 0x288) = uVar11;
                                                        if (uVar10 != 0x27) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0990;
                                                          *(undefined8 *)(lVar9 + 0x290) = 0x4b004b1
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x298) = uVar11;
                                                          if (0x28 < uVar10) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0658
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x2a0) =
                                                                 0x30304e204e2;
                                                            *(undefined8 *)(lVar9 + 0x2a8) = uVar11;
                                                            if (uVar10 != 0x29) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0c80;
                                                              *(undefined8 *)(lVar9 + 0x2b0) =
                                                                   0x30304e304e3;
                                                              *(undefined8 *)(lVar9 + 0x2b8) =
                                                                   uVar11;
                                                              if (0x2a < uVar10) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0260;
                                                                *(undefined8 *)(lVar9 + 0x2c0) =
                                                                     0x30304e404e4;
                                                                *(undefined8 *)(lVar9 + 0x2c8) =
                                                                     uVar11;
                                                                if (uVar10 != 0x2b) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa00d0;
                                                                  *(undefined8 *)(lVar9 + 0x2d0) =
                                                                       0x30304e504e5;
                                                                  *(undefined8 *)(lVar9 + 0x2d8) =
                                                                       uVar11;
                                                                  if (0x2c < uVar10) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa09e0;
                                                                    *(undefined8 *)(lVar9 + 0x2e0) =
                                                                         0x30304e604e6;
                                                                    *(undefined8 *)(lVar9 + 0x2e8) =
                                                                         uVar11;
                                                                    if (uVar10 != 0x2d) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0378;
                                                                      *(undefined8 *)(lVar9 + 0x2f0)
                                                                           = 0x30304e704e7;
                                                                      *(undefined8 *)(lVar9 + 0x2f8)
                                                                           = uVar11;
                                                                      if (0x2e < uVar10) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0568;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x300) =
                                                                             0x30304e804e8;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x308) = uVar11;
                                                                        if (uVar10 != 0x2f) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0528
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x310) =
                                                                               0x30304e904e9;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x318) = uVar11;
                                                                          if (0x30 < uVar10) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08f9ffd8;
                                                  *(undefined8 *)(lVar9 + 800) = 0x30304ea04ea;
                                                  *(undefined8 *)(lVar9 + 0x328) = uVar11;
                                                  if (uVar10 != 0x31) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0768;
                                                    *(undefined8 *)(lVar9 + 0x330) = 0x4e42710;
                                                    *(undefined8 *)(lVar9 + 0x338) = uVar11;
                                                    if (0x32 < uVar10) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0600;
                                                      *(undefined8 *)(lVar9 + 0x340) = 0x4e4275f;
                                                      *(undefined8 *)(lVar9 + 0x348) = uVar11;
                                                      if (uVar10 != 0x33) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0a68;
                                                        *(undefined **)(lVar9 + 0x350) =
                                                             &DAT_04b02ee0;
                                                        *(undefined8 *)(lVar9 + 0x358) = uVar11;
                                                        if (0x34 < uVar10) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa06d8;
                                                          *(undefined **)(lVar9 + 0x360) =
                                                               &DAT_04b02ee1;
                                                          *(undefined8 *)(lVar9 + 0x368) = uVar11;
                                                          if (uVar10 != 0x35) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa07e8
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x370) =
                                                                 0x10104e44e9f;
                                                            *(undefined8 *)(lVar9 + 0x378) = uVar11;
                                                            if (0x36 < uVar10) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0230;
                                                              *(undefined8 *)(lVar9 + 0x380) =
                                                                   0x4e44f31;
                                                              *(undefined8 *)(lVar9 + 0x388) =
                                                                   uVar11;
                                                              if (uVar10 != 0x37) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0b30;
                                                                *(undefined8 *)(lVar9 + 0x390) =
                                                                     0x4e44f35;
                                                                *(undefined8 *)(lVar9 + 0x398) =
                                                                     uVar11;
                                                                if (0x38 < uVar10) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa0278;
                                                                  *(undefined8 *)(lVar9 + 0x3a0) =
                                                                       0x4e44f36;
                                                                  *(undefined8 *)(lVar9 + 0x3a8) =
                                                                       uVar11;
                                                                  if (uVar10 != 0x39) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0818;
                                                                    *(undefined8 *)(lVar9 + 0x3b0) =
                                                                         0x4e44f38;
                                                                    *(undefined8 *)(lVar9 + 0x3b8) =
                                                                         uVar11;
                                                                    if (0x3a < uVar10) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa01d8;
                                                                      *(undefined8 *)(lVar9 + 0x3c0)
                                                                           = 0x4e44f3c;
                                                                      *(undefined8 *)(lVar9 + 0x3c8)
                                                                           = uVar11;
                                                                      if (uVar10 != 0x3b) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0338;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x3d0) = 0x4e44f3d
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x3d8) = uVar11;
                                                                        if (0x3c < uVar10) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0128
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x3e0) =
                                                                               0x3a44f42;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 1000) = uVar11;
                                                                          if (uVar10 != 0x3d) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa01a8;
                                                  *(undefined8 *)(lVar9 + 0x3f0) = 0x4e44f49;
                                                  *(undefined8 *)(lVar9 + 0x3f8) = uVar11;
                                                  if (0x3e < uVar10) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa02f0;
                                                    *(undefined8 *)(lVar9 + 0x400) = 0x4e84fc4;
                                                    *(undefined8 *)(lVar9 + 0x408) = uVar11;
                                                    if ((*(ulong *)(lVar9 + 0x18) & 0xffffffc0) != 0
                                                       ) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0638;
                                                      *(undefined8 *)(lVar9 + 0x410) = 0x4e74fc8;
                                                      *(undefined8 *)(lVar9 + 0x418) = uVar11;
                                                      if (0x40 < uVar10) {
                                                        *(undefined8 *)(lVar9 + 0x428) =
                                                             *(undefined8 *)puVar2;
                                                        *(undefined8 *)(lVar9 + 0x420) =
                                                             0x30304e35182;
                                                        if (uVar10 != 0x41) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa00e0;
                                                          *(undefined8 *)(lVar9 + 0x430) = 0x4e45187
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x438) = uVar11;
                                                          puVar2 = PTR_DAT_08fa0480;
                                                          if (0x42 < uVar10) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0630
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x440) =
                                                                 0x4e35221;
                                                            *(undefined8 *)(lVar9 + 0x448) = uVar11;
                                                            if (uVar10 != 0x43) {
                                                              uVar11 = *(undefined8 *)puVar3;
                                                              *(undefined8 *)(lVar9 + 0x450) =
                                                                   0x30304e3556a;
                                                              *(undefined8 *)(lVar9 + 0x458) =
                                                                   uVar11;
                                                              if (0x44 < uVar10) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0c48;
                                                                *(undefined8 *)(lVar9 + 0x460) =
                                                                     0x30304e46faf;
                                                                *(undefined8 *)(lVar9 + 0x468) =
                                                                     uVar11;
                                                                if (uVar10 != 0x45) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa08f0;
                                                                  *(undefined8 *)(lVar9 + 0x470) =
                                                                       0x30304e26fb0;
                                                                  *(undefined8 *)(lVar9 + 0x478) =
                                                                       uVar11;
                                                                  if (0x46 < uVar10) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0788;
                                                                    *(undefined8 *)(lVar9 + 0x480) =
                                                                         0x10104e66fb1;
                                                                    *(undefined8 *)(lVar9 + 0x488) =
                                                                         uVar11;
                                                                    if (uVar10 != 0x47) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0968;
                                                                      *(undefined8 *)(lVar9 + 0x490)
                                                                           = 0x30304e96fb2;
                                                                      *(undefined8 *)(lVar9 + 0x498)
                                                                           = uVar11;
                                                                      if (0x48 < uVar10) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa09c0;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x4a0) =
                                                                             0x30304e36fb3;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x4a8) = uVar11;
                                                                        if (uVar10 != 0x49) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08f9ffd0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x4b0) =
                                                                               0x30304e86fb4;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x4b8) = uVar11;
                                                                          if (0x4a < uVar10) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa00f0;
                                                  *(undefined8 *)(lVar9 + 0x4c0) = 0x30304e56fb5;
                                                  *(undefined8 *)(lVar9 + 0x4c8) = uVar11;
                                                  if (uVar10 != 0x4b) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa0998;
                                                    *(undefined8 *)(lVar9 + 0x4d0) = 0x20204e76fb6;
                                                    *(undefined8 *)(lVar9 + 0x4d8) = uVar11;
                                                    if (0x4c < uVar10) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0358;
                                                      *(undefined8 *)(lVar9 + 0x4e0) = 0x30304e66fb7
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x4e8) = uVar11;
                                                      if (uVar10 != 0x4d) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0c60;
                                                        *(undefined8 *)(lVar9 + 0x4f0) =
                                                             0x30104e46fbd;
                                                        *(undefined8 *)(lVar9 + 0x4f8) = uVar11;
                                                        if (0x4e < uVar10) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa03f8;
                                                          *(undefined8 *)(lVar9 + 0x500) =
                                                               0x30304e796c6;
                                                          *(undefined8 *)(lVar9 + 0x508) = uVar11;
                                                          if (uVar10 != 0x4f) {
                                                            *(undefined8 *)(lVar9 + 0x518) =
                                                                 *(undefined8 *)puVar5;
                                                            *(undefined8 *)(lVar9 + 0x510) =
                                                                 0x10103a4c42c;
                                                            if (0x50 < uVar10) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08fa0c78;
                                                              *(undefined8 *)(lVar9 + 0x520) =
                                                                   0x30103a4c42d;
                                                              *(undefined8 *)(lVar9 + 0x528) =
                                                                   uVar11;
                                                              if (uVar10 != 0x51) {
                                                                uVar11 = *(undefined8 *)puVar5;
                                                                *(undefined8 *)(lVar9 + 0x530) =
                                                                     0x3a4c42e;
                                                                *(undefined8 *)(lVar9 + 0x538) =
                                                                     uVar11;
                                                                if (0x52 < uVar10) {
                                                                  uVar11 = *(undefined8 *)
                                                                            PTR_DAT_08fa0130;
                                                                  *(undefined8 *)(lVar9 + 0x540) =
                                                                       0x30303a4cadc;
                                                                  *(undefined8 *)(lVar9 + 0x548) =
                                                                       uVar11;
                                                                  if (uVar10 != 0x53) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa0b98;
                                                                    *(undefined8 *)(lVar9 + 0x550) =
                                                                         0x10103b5caed;
                                                                    *(undefined8 *)(lVar9 + 0x558) =
                                                                         uVar11;
                                                                    if (0x54 < uVar10) {
                                                                      uVar11 = *(undefined8 *)
                                                                                PTR_DAT_08fa0008;
                                                                      *(undefined8 *)(lVar9 + 0x560)
                                                                           = 0x30303a8d698;
                                                                      *(undefined8 *)(lVar9 + 0x568)
                                                                           = uVar11;
                                                                      if (uVar10 != 0x55) {
                                                                        uVar11 = *(undefined8 *)
                                                                                  PTR_DAT_08fa0570;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x570) =
                                                                             0xdeaadeaa;
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x578) = uVar11;
                                                                        if (0x56 < uVar10) {
                                                                          uVar11 = *(undefined8 *)
                                                                                    PTR_DAT_08fa0018
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x580) =
                                                                               0xdeabdeab;
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0x588) = uVar11;
                                                                          if (uVar10 != 0x57) {
                                                                            uVar11 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_08fa07a8;
                                                  *(undefined8 *)(lVar9 + 0x590) = 0xdeacdeac;
                                                  *(undefined8 *)(lVar9 + 0x598) = uVar11;
                                                  if (0x58 < uVar10) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_08fa08d8;
                                                    *(undefined8 *)(lVar9 + 0x5a0) = 0xdeaddead;
                                                    *(undefined8 *)(lVar9 + 0x5a8) = uVar11;
                                                    if (uVar10 != 0x59) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_08fa0318;
                                                      *(undefined8 *)(lVar9 + 0x5b0) = 0xdeaedeae;
                                                      *(undefined8 *)(lVar9 + 0x5b8) = uVar11;
                                                      if (0x5a < uVar10) {
                                                        uVar11 = *(undefined8 *)PTR_DAT_08fa0760;
                                                        *(undefined8 *)(lVar9 + 0x5c0) = 0xdeafdeaf;
                                                        *(undefined8 *)(lVar9 + 0x5c8) = uVar11;
                                                        if (uVar10 != 0x5b) {
                                                          uVar11 = *(undefined8 *)PTR_DAT_08fa0218;
                                                          *(undefined8 *)(lVar9 + 0x5d0) =
                                                               0xdeb0deb0;
                                                          *(undefined8 *)(lVar9 + 0x5d8) = uVar11;
                                                          if (0x5c < uVar10) {
                                                            uVar11 = *(undefined8 *)PTR_DAT_08fa0b18
                                                            ;
                                                            *(undefined8 *)(lVar9 + 0x5e0) =
                                                                 0xdeb1deb1;
                                                            *(undefined8 *)(lVar9 + 0x5e8) = uVar11;
                                                            if (uVar10 != 0x5d) {
                                                              uVar11 = *(undefined8 *)
                                                                        PTR_DAT_08f9ffe8;
                                                              *(undefined8 *)(lVar9 + 0x5f0) =
                                                                   0xdeb2deb2;
                                                              *(undefined8 *)(lVar9 + 0x5f8) =
                                                                   uVar11;
                                                              if (0x5e < uVar10) {
                                                                uVar11 = *(undefined8 *)
                                                                          PTR_DAT_08fa0958;
                                                                *(undefined8 *)(lVar9 + 0x600) =
                                                                     0xdeb3deb3;
                                                                *(undefined8 *)(lVar9 + 0x608) =
                                                                     uVar11;
                                                                if (uVar10 != 0x5f) {
                                                                  *(undefined8 *)(lVar9 + 0x618) =
                                                                       *(undefined8 *)puVar2;
                                                                  *(undefined8 *)(lVar9 + 0x610) =
                                                                       0x10104b0fde8;
                                                                  if (0x60 < uVar10) {
                                                                    uVar11 = *(undefined8 *)
                                                                              PTR_DAT_08fa08c0;
                                                                    *(undefined8 *)(lVar9 + 0x620) =
                                                                         0x30304b0fde9;
                                                                    *(undefined8 *)(lVar9 + 0x628) =
                                                                         uVar11;
                                                                    if (uVar10 != 0x61) {
                                                                      *(undefined8 *)(lVar9 + 0x638)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar9 + 0x630)
                                                                           = 0;
                                                                      puVar3 = PTR_DAT_08f91288;
                                                                      *(long *)(*(long *)(*(long *)
                                                  puVar4 + 0xb8) + 8) = lVar9;
                                                  iVar8 = FUN_0746fb68();
                                                  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
                                                  *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10)
                                                       = iVar8 + -1;
                                                  if (iVar1 == 0) {
                                                    thunk_FUN_0408f364();
                                                  }
                                                  if (DAT_09545653 == '\0') {
                                                    FUN_0403162c(PTR_DAT_08f91288);
                                                    DAT_09545653 = '\x01';
                                                  }
                                                  puVar7 = PTR_DAT_08f9ff58;
                                                  puVar6 = PTR_DAT_08f9ff50;
                                                  puVar5 = PTR_DAT_08f9ff48;
                                                  puVar2 = PTR_DAT_08f74718;
                                                  lVar9 = *(long *)puVar3;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_0408f364();
                                                    lVar9 = *(long *)puVar3;
                                                  }
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(lVar9 + 0xb8) + 0x18);
                                                  uVar11 = thunk_FUN_0406deb8(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_06fda0a8(uVar11,uVar12,*(undefined8 *)puVar5);
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x18) =
                                                       uVar11;
                                                  uVar11 = thunk_FUN_0406deb8(uVar12);
                                                  FUN_06ef98b4(uVar11,*(undefined8 *)puVar6);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x20) =
                                                       uVar11;
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
  FUN_04031894();
}


